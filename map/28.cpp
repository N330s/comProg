#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  unordered_map<string, vector<string>> list;
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string inp, song, singer;
    getline(cin, inp);
    int i = inp.find(", ");
    song = inp.substr(0, i);
    singer = inp.substr(i + 2);
    list[song].push_back(singer);
  }
  string inp;
  getline(cin, inp);
  string elem;
  while (inp.size() > 0) {
    int i = inp.find(", ");
    if (i == -1) {
      elem = inp.substr(0);
      inp.clear();
    }
    else {
      elem = inp.substr(0, i);
      inp.erase(0, i+2);
    }
    cout << elem << " -> ";
    if (list.find(elem) == list.end()) {
      cout << "Not found" << endl;
    }
    else {
      for (int i = 0; i < list[elem].size() - 1; i++) {
        cout << list[elem][i] << ", "; 
      }
      cout << list[elem].back() << endl;
    }
  }
  return 0;
}
