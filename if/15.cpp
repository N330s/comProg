#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string inp;
  cin >> inp;
  string fTwo = inp.substr(0, 2); 
  if (inp.size() == 10) {
    if (fTwo == "08" || fTwo == "06" || fTwo == "09") {
      cout << "Mobile number";
      return 0;
    }
  }
  cout << "Not a mobile number";
  return 0;
}
