#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float inp = 0;
  std::cin >> inp;
  if (inp >= 1e9) {
    inp = inp / 1e9;
    if (inp >= 10) {
      inp = round(inp);
    }
    else{
      std::cout << std::setprecision(2);
    }
    std::cout << inp << 'B';
  }

  else if ((inp >= 1e6)) {
    inp = inp / 1e6;
    if (inp >= 10) {
      inp = round(inp);
    }
    else {
    std::cout <<std::setprecision(2);
    }
    std::cout << inp << 'M';
  }

  else if (inp >= 1e3) {
    inp = inp / 1e3;
    if (inp >= 10) {
      inp = round(inp);
    }
    else {
      std::cout << std::setprecision(2);
    }
    std::cout << inp << 'K';
  }
  else {
    std::cout << inp;
  }
  return 0;
}
