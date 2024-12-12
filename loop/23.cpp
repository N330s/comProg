#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  string inp;
  int n;
  cin >> inp >> n;
  inp.push_back(' ');
  int count = 1;
  for (int i = 1; i < inp.size(); i++) {
    if (inp[i] == inp[i - 1]) {
      count += 1;
    }
    else if (count >= n) {
      for (int j = i - 1; j > i - 1 - count; j--) {
        inp[j] = ' ';
      }
      count = 1;
    }
    else {
      count = 1;
    }
  }
  for (char elem : inp) {
    if (elem != ' ')
      cout << elem;
  }
  return 0;
}
