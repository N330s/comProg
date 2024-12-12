#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int zigzagmin = 1e9, zigzagmax = -1e9, zagzigmin = 1e9, zagzigmax = -1e9;
  int x = 0, y = 0;
  int n = 0;
  while (true) {
    cin >> x;
    if (x == -998 || x == -999) break;
    cin >> y;
    n += 1;
    if (n % 2 != 0) {
      if (x < zigzagmin) zigzagmin = x;
      if (y > zigzagmax) zigzagmax = y;
      if (y < zagzigmin) zagzigmin = y;
      if (x > zagzigmax) zagzigmax = x;
    }
    else {
      if (y < zigzagmin) zigzagmin = y;
      if (x > zigzagmax) zigzagmax = x;
      if (x < zagzigmin) zagzigmin = x;
      if (y > zagzigmax) zagzigmax = y;
    }
  }
  if (x == -998) {
    cout << zigzagmin << " " << zigzagmax; 
  }
  if (x == -999) cout << zagzigmin << " " << zagzigmax;

  return 0;
}
