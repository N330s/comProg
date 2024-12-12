#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<pair<int, int>> list;
  int n = 0;
  int result;
  int max = 0;
  cin >> n;
  while (n--) {
    int start, stop;
    cin >> start >> stop;
    if (start > max)
      max = start;
    if (stop > max)
      max = stop;
    list.push_back(make_pair(start, stop));  
  }
  for (int i = 1; i <= max; i++) {
    int temp = 0;
    for (auto elem : list) {
      if (elem.first <= i && i < elem.second)
        temp += 1;
    }
    if (temp > result)
      result = temp;
  }
  cout << result;
  return 0;
}
