#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  string result = "";
  string inp;
  cin >> inp;
  for (int i = 0; i < inp.size(); i++) {
    if ((isupper(inp[i]) || ((isdigit(inp[i]) && !isdigit(inp[i-1]))) || (isdigit(inp[i - 1]) && !isdigit(inp[i]))) && i != 0) {
      result += ", " ;
    }
    result += inp[i];
  }
  cout << result;
  return 0;
}
