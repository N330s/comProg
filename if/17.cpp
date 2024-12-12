#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int inp;
  cin >> inp;
  if (inp <= 100)
    cout << "18";  
  else if (inp <= 250)
    cout << "22";
  else if (inp <= 500)
    cout << "28";
  else if (inp <= 1000)
    cout << "38";
  else if (inp <= 2000)
    cout << "58";
  else 
    cout << "Reject";
  return 0;
}
