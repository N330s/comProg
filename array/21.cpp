#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
  double curr = 0;
  vector<int> list;
  int n;
  cin >> n;
  while (n--) {
    int temp;
    cin >>temp;
    list.push_back(temp);
  }   
  for (int j = 0; j < list.size(); j++) {
    curr = list[j];
    for (int i = j; i > 0; i--) {
      curr = list[i-1] + 1 / curr;
    }
    cout << setprecision(10) << curr << "\n";
  }
  return 0;
}
