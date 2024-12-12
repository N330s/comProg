#include <iostream> 
#include <cmath>

int main(int argc, char const *argv[])
{
  float a = 0, b = 0, c = 0;
  float x1 = 0, x2 = 0;
  std::cin >> a >> b >> c; 
  x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);  
  x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);  
  x1 = round (x1 * 1e3) / 1e3;
  x2 = round (x2 * 1e3) / 1e3;
  std::cout << x1 << " " << x2;
  return 0;
}
