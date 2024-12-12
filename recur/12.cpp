#include <iostream>

using namespace std;

int m = 0;
int a = 0;

int Pmod (int k) {
  if (k == 0) 
    return 1;
  if (k % 2 == 0) {
    return (Pmod(k/2) * Pmod(k/2)) % m;
  }
  else {
    return a * (Pmod(k/2) * Pmod(k/2)) % m;
  }
}

int main(int argc, char const *argv[])
{
  int k = 0;
  cin >> a >> k >> m;
  cout << Pmod(k);
  return 0;
}
