#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
  long long fact = 1;
  for(int i = 1; i <= 10; i++) {
    fact *= i;
  }

  double eight = pow(8, 8);

  double res = (M_PI - (fact / eight) + pow(log(9.7), (7 / sqrt(71)) - sin(40 * (M_PI / 180)))) / pow(1.2, cbrt(2.3));
  std::cout << res;
  return 0;
}
