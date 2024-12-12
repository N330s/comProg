#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  while (n--) {
    bool check = false;
    string temp;
    int b, d;
    char a, c;
    cin >> a >> b >> c >> d;
    while (b--) {
      temp.push_back(a);
    }
    while (d--) {
      temp.push_back(c);
    }
    long long num = stoll(temp);
    if (num % 2 == 0 || num % 3 == 0)
      check = true;
    else {
      for (long long i = 5; i <= sqrt(num); i+= 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
          check = true;
          break;
        }
      }
    }
    if (!check) 
      cout << "YES" << endl;
    else 
      cout << "NO" << endl;
  }
  return 0;
}
