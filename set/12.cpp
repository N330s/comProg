#include <iostream>
#include <unordered_set>

using namespace std;

int main(int argc, char const *argv[])
{
  unordered_set<int>set;
  int count = 0;
  int inp;
  while (cin >> inp) {
    count += 1;
    if (set.find(inp) != set.end()){
      cout << count;
      return 0;
    } 
    set.insert(inp);
  }
  cout << -1;
  return 0;
}
