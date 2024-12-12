#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
  float x = 0;
  std::cin >> x;
  float y = pow(x, sqrt(log(pow(x+1, 2)))) / (10 - x);
  y = round(y * 1e6) / 1e6;
  std::cout << y;
  return 0;
}
