#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  string result = "";
  cin >> n;
  int i = 2;
  while(i <= n) {
    if (n % i == 0) {
      result.append(to_string(i) + "*");
      n = n / i;
    }
    else {
      i++;
    }
  }
  if (result.size() != 0){
    result.pop_back();
  }
  cout << result;
  return 0;
}
