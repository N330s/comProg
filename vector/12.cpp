#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> result;
  int n;
  cin >> n;
  result.push_back(n);
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    }
    else {
      n = 3*n + 1;
    }
    result.push_back(n);
  }  
  int i = 0;
  if (result.size() > 15) {
    i = result.size() - 15;
  }
  while (i < result.size() - 1) {
    cout << result[i] << "->";
    i++;
  }
  cout << result[result.size()-1];
  return 0;
}
