#include <iostream>
#include <set>
#include <string>
#include <sstream>

#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
  set<int> un;
  set<int> intersect;
  set<int> pintersect;
  set<int> diff;
  set<int> set1;
  string fLine;
  getline(cin, fLine);
  stringstream ss(fLine);
  int temp;
  while (ss >> temp) {
    un.insert(temp);
  }
  diff = un;
  intersect = un;
  while (true) {
    string inp;
    getline(cin, inp);
    if (inp.size() == 0) {
      break;
    }
    stringstream ss(inp);
    int temp;
    while (ss >> temp) {
      un.insert(temp);
      if (diff.find(temp) != diff.end()) {
        diff.erase(temp);
      }
      if (intersect.find(temp) != intersect.end()) {
        pintersect.insert(temp);
      }
    }
    intersect = pintersect;
    pintersect.clear();
  }

  cout << "U:";
  if (un.size() == 0)
    cout << " " << "empty set";
  for (int i : un) {
    cout << " " << i;
  }
  cout << "\n" << "I:";
  if (intersect.size() == 0)
    cout << " " << "empty set";
  for (int i : intersect) {
    cout << " " << i;
  }
  cout << "\n" << "D:";
  if (diff.size() == 0)
    cout << " " << "empty set";
  for (int i : diff) {
    cout << " " << i;
  }
  return 0;
}
