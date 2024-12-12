#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
  map<string, string> map1;
  map<string, string> map2;
  int n;
  cin >> n;
  while (n--) {
    string first, last, number;
    cin >> first >> last >> number;
    string name = first + " " + last;
    map1[name] = number;
    map2[number] = name;
  }
  cin >> n;
  cin.ignore();
  while (n--) {
    string search;
    getline(cin, search);
    if (map1.find(search) != map1.end()) {
      cout << search << " --> " << map1[search] << endl;
    }
    else if (map2.find(search) != map2.end()) {
      cout << search << " --> " << map2[search] << endl;
    }
    else {
      cout << search << " --> " << "Not found" << endl;
    }
  }
  return 0;
}
