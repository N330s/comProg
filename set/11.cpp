#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<char> a;
  vector<char> b; 
  string inpa, inpb;
  getline(cin, inpa);
  getline(cin, inpb);
  for (char elem : inpa) {
    if (elem != ' ')
      a.push_back(tolower(elem));
  }
  for (char elem : inpb) {
    if (elem != ' ')
      b.push_back(tolower(elem));
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (a.size() != b.size()) {
    cout << "NO";
    return 0;
  }
  else {
    auto itra = a.begin();
    for (auto itrb = b.begin(); itrb != b.end(); itrb++, itra++) {
      if (*itra != *itrb) {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";
  return 0;
}
