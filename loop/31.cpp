#include <iostream>
#include <string>
#include <cmath>

using namespace std;

size_t power(size_t base, unsigned int exponent) {
  if (exponent == 1)
    return base;
  return base * power(base, exponent - 1);
}

int main(int argc, char const *argv[])
{
  string n, m;
  size_t sum = 0;
  cin >> n >> m;
  if (n.length() == m.length()) {
    cout << (stoll(m) - stoll(n) + 1) * (m.length()); 
    return 0;
  }
  sum += ((stoll(m) - power(10, m.length() - 1)) + 1) * m.length();
  sum +=  ((power(10, n.length()) - stoll(n))) * n.length();
  for (int i = n.length() + 1; i < m.length(); i++) {
    sum += (power(10, i) - power(10, i - 1)) * (i);
  }
  cout << sum;
  return 0;
}
