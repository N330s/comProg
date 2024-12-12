#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  for (int i = 1; i < n; i ++) {
    for (int j = 1; j <= n - i; j++) {
      cout << '.';
    }
    for (int k = 1; k <= i * 2 - 1; k++) {
      if (i == 1) {
        cout << "*";
      }
      else if (k == 1 || k == i*2 - 1) {
        cout << "*";
      }
      else {
        cout << ".";
      }
    }
    cout << endl;
  }
  for (int i = 1; i < n*2; i++) {
    cout << "*";
  }
  return 0;
}
