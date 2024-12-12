#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
  int xe, ye, re, rp, xm, ym;
  std::cin >> xe >> ye >> re >> rp>> xm >> ym;
  int r = re - rp;
  double C = sqrt(pow(xm - xe, 2) + pow(ym - ye, 2));
  double ratio = C / r;
  double a = (xm - xe) / ratio;
  double b = (ym - ye) / ratio;
  double x = xe + a;
  double y = ye + b;
  x = round(x);
  y = round(y);
  std::cout << x << " " << y;
  return 0;
}