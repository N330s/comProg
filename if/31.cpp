#define _USE_MATH_DEFINES

#include <iostream>
#include <vector>
#include <cmath>

int CheckMonth(int m, int y) {
  if (m == 2 ) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return 29;
    else return 28;
  }
  if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
  else return 31;
}

int main(int argc, char const *argv[])
{
  int sum = 0;
  int red = 0, blue = 0, black = 0;
  int d1, d2, m1, m2, y1, y2;
  std::cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
  y1 -= 543;
  y2 -= 543;
  black = (y2 - y1 - 1) * 365;
  blue = -d1 + 1;
  while (m1 <= 12) {
    int lengthMonth = CheckMonth(m1, y1); 
    blue += lengthMonth;
    m1 += 1;
  }
  red = d2 - 1;
  for (int i = 1; i < m2; i++) {
    int lengthMonth = CheckMonth(i, y2);
    red += lengthMonth;
  }
  sum = blue + black + red;
  float physical = std::sin((2 * M_PI * sum) / 23);
  float emotional = std::sin((2 * M_PI * sum) / 28);
  float intellectual = std::sin((2 * M_PI * sum) / 33);
  physical = round(physical * 100.0) / 100.0;
  emotional = round(emotional * 100.0) / 100.0;
  intellectual = round(intellectual * 100.0) / 100.0;
  std::cout << sum << " " << physical << " " << emotional << " " << intellectual;
  // std::cout << std::endl << blue << std::endl << black << std::endl << red;
  return 0;
}
