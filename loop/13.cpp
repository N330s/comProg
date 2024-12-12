#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
  std::string target = "";
  int res = 0;
  std::vector<std::string> list;
  std::string inp;
  std::cin >> target;
  std::cin.ignore();
  std::getline(std::cin, inp);
  for (auto &itr : inp) {
    if (itr == '"' || itr ==  '(' || itr ==')' || itr == ',' || itr == '.' || itr == '\'') itr = ' ';
  }

  std::stringstream ss(inp);
  std::string temp = "";
  while (ss >> temp) {
    if (target == temp) res += 1
  }
  std::cout << res;
  return 0;
}

