#include <iostream>

int main(int argc, char const *argv[])
{
  float point = 0;
  std::cin >> point;
  if(point >= 80) std::cout << "A";
  else if (point >=70) std::cout << "B";
  else if (point >= 60) std::cout << "C";
  else if (point >= 50) std::cout << "D";
  else std::cout << "F";
  return 0;
}
