#include <iostream>
#include <cmath> 
#include <iomanip>

double Mosteller (double mass, double height) {
  return std::sqrt(mass * height) / 60;
}

double Haycock (double mass, double height) {
  return 0.024265 * pow(mass, 0.5378) * pow(height, 0.3964);
}

double Boyd (double mass, double height) {
  return 0.0333 * pow(mass, 0.6157 - 0.0188 * log10(mass)) * pow(height, 0.3);
}

int main(int argc, char const *argv[])
{
  double mass = 0.0, height = 0.0;
  std::cin >> mass >> height;
  std::cout << std::setprecision(15);
  std::cout << Mosteller(mass, height) << std::endl << Haycock(mass, height) << std::endl << Boyd(mass, height);

  return 0;
}
