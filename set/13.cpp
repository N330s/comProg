#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
  map<string, int> winner;
  map<string, int> loser;
  bool print = false;
  string inp1, inp2;
  while (cin >> inp1) {
    cin >> inp2;
    winner[inp1] = 1;
    loser[inp2] = 1;
  }
  for (auto elem : winner) {
    if (loser[elem.first] == 0) {
      cout << elem.first << " ";
      print = true;
    }
  }
  if (!print)
    cout << "None";
  return 0;
}
