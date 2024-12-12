#include <iostream>
#include <unordered_map>

int main(int argc, char const *argv[])
{
  std::string inp = "";
  std::cin >> inp;
  std::unordered_map<std::string, int>map;
  map["01"] = 1, map["02"] = 1, map["40"] = 1, map["51"] = 1, map["53"] = 1, map["55"] = 1, map["58"] = 1;
  if ((inp[0] == '2' && inp.length() == 2 && isdigit(inp[1])) || (inp[0] == '3' && inp.length() == 2 && isdigit(inp[1])) || map[inp] == 1 ) std::cout << "OK";
  else std::cout << "Error";
  return 0;
}
