#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
  map<string, string> map;
  vector<string> check;
  string character, type;
  while (cin >> character >> type) {
    if (find(check.begin(), check.end(), type) == check.end()) {
      check.push_back(type);
    }
    map[type] += " " + character;
  }
  for (auto elem : check) {
    cout << elem << ":" << map[elem] << endl;
  }
  return 0;
}
