#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
  string result;
  cin >> result;
  while (true) {
    string inp;
    cin >> inp;
    if (inp == "END")
      break;
    if (result.length() < inp.length()) 
      swap(result, inp);
    int i = result.length() - 1;
    for (int j = inp.length() - 1; j >= 0; j--, i --) {
      result[i] += (inp[j] - '0');
    }
    for (int i = result.length() - 1; i > 0; i--) {
      if (result[i] > '9'){
        result[i - 1] += 1;
        result[i] -= 10;
      }
    }
    if (result[0] > '9'){
      result[0] -= 10;
      result.insert(0, "1");
    }
  }  
  cout << result;
  return 0;
}
