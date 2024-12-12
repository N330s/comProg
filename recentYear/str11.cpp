#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
  std::string inp = "";
  std::cin >> inp;
  int temp = 0;
  for (int i = 0; i < 12; i++) {
    int a = int(inp[i]) - '0';
    temp += (13 - i) * a;
  }
  std::string part[5] = {};
  int n12 = 0;
  n12 = (11 - (temp % 11)) % 10;
  part[0] = inp.substr(0, 1);
  part[1] = inp.substr(1, 4);
  part[2] = inp.substr(5, 5);
  part[3] = inp.substr(10, 2);
  std::cout << part[0] << "-" << part[1] << "-" << part[2] << "-" << part[3] << "-" << n12;
  return 0;
}
