#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  bool check = false;
  string inp;
  getline (cin, inp);
  for (char &elem : inp) {
    if (elem == '(') {
      elem = '[';
      check = true;
    }
    else if (elem == '[') {
      elem = '(';
      check = true;
    }
    else if (elem == ')') {
      elem = ']';
      check = true;
    }
    else if (elem == ']') {
      elem = ')';
      check = true;
    }
  }
  cout << inp;
  return 0;
}