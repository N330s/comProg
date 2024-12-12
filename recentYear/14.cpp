#include <iostream> 
#include <string>

int main(int argc, char const *argv[])
{
  int inp = 0;
  std::cin >> inp;
  inp -= 543;
  std::string temp = std::to_string(inp);
  temp = temp.substr(2, 2);
  int y = stoi(temp);
  int d = (y + y / 4 + 11) % 7;
  std::cout << d;
  return 0;
}
