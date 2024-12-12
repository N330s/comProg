#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
  map<string, int> subj;
  map<string, string> selected;
  map<float, vector<string>> elec;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string inp1;
    int inp2;
    cin >> inp1 >> inp2;
    subj[inp1] = inp2;
  }
  int m;
  cin >> m;
  while (m--) {
    string inp1;
    float inp2;
    cin >> inp1;
    cin >> inp2;
    elec[inp2].push_back(inp1);
    for (int i = 0; i < 4; i++) {
      cin >> inp1;
      elec[inp2].push_back(inp1);
    }
  }
  for (auto it = elec.rbegin(); it != elec.rend(); it++) {
    for (int i = 1; i < elec.size(); i++) {
      if(subj[elec[it->first][i]] > 0) {
        selected[elec[it->first][0]] = elec[it->first][i];
        subj[elec[it->first][i]]--;
        break;
      }
    }
  }
  for (auto itr : selected) {
    cout << itr.first << " " << selected[itr.first] << endl;
  }
  return 0;
}
