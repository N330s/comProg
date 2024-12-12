#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
  map<string, string> map1;
  map<string, string> map2;
  int n;
  cin >> n;
  while (n--) {
    string nick, real;
    cin >> nick >> real;
    map1[nick] = real;
    map2[real] = nick;
  }  
  cin >> n;
  while (n--) {
    string search;
    cin >> search;
    if (map1.find(search) != map1.end()) {
      cout << map1[search] << endl;
    }
    else if (map2.find(search) != map2.end()) {
      cout << map2[search] << endl;
    }
    else {
      cout << "Not found" << endl;
    }
  }

  return 0;
}
