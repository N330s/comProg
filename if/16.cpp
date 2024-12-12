#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int inp;
  cin >> inp;
  if (inp == 0)
    cout << "zero" << endl;
  else if (inp > 0)
    cout << "positive" << endl;
  else
    cout << "negative" << endl;
  if (inp % 2 == 0)
    cout << "even" << endl;
  else 
    cout << "odd" << endl;
  return 0;
}
