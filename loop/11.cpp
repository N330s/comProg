#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
  float n = 0;
  float sum = 0, count = 0;
  bool check = false;

  while (true) {
    cin >> n;
    if (n == -1)
      break;    
    sum += n;
    count += 1;
    check = true;
  }
  if (!check) {
    cout << "No Data";
    return 0;
  }
  float avg = round((sum / count) * 100) / 100;
  cout << avg;
  return 0;
}
