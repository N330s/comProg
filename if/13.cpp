#include <iostream> 
#include <vector>
#include <cmath>
#include <algorithm>

int main(int argc, char const *argv[])
{
  std::vector <double> inp = {0, 0, 0, 0};
  std::cin >> inp[0] >> inp[1] >> inp[2] >> inp[3];
  std::sort(inp.begin(), inp.end());
  double mean = (inp[1] + inp[2]) / 2;
  std::cout << std::round(mean * 100.0) / 100.0;
  return 0;
}
