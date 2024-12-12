#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string q, a;
  getline(cin, q);
  getline(cin, a);
  int score = 0;
  if (q.size() != a.size()) {
    cout << "Incomplete answer";
    return 0;
  }
  for (int i = 0; i < q.size(); i++) {
    if (q[i] == a[i])
      score += 1;
  }
  cout << score;
  return 0;
}
