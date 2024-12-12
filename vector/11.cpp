#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  vector<int> result;
  int count = 1;
  cin >> n;
  while (true) {
    int inp;
    cin >> inp;
    if (inp == -1) 
      break;
    if (count % 2 == 1) {
      result.push_back(inp);
    }
    else {
      result.insert(result.begin(), inp);
    }
    count += 1;
  }
  cout << "[";
  for (int i = 0; i < result.size() - 1; i++) {
    cout << result[i] << ", ";
  }
  cout << result[result.size() - 1] << "]";
  return 0;
}
