#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<string> list; 
  string temp;
  while (cin >> temp) {
    list.push_back(temp);
  }
  int i = 0;
  for (i = 0; i < list[0].size(); i++) {
    if (list[0][i] == 'a' || list[0][i] == 'e' || list[0][i] == 'i' || list[0][i] == 'o' || list[0][i] == 'u') {
      break;
    }
  }
  temp = list[0].substr(i);
  list[0] = list[0].substr(0, i);
  for (i = 0; i < list[list.size() - 1].size(); i++) {
    if (list[list.size()-1][i] == 'a' || list[list.size()-1][i] == 'e' || list[list.size()-1][i] == 'i' || list[list.size()-1][i] == 'o' || list[list.size()-1][i] == 'u') {
      break;
    }
  }
  list[0].append(list[list.size()-1].substr(i));
  list[list.size()-1] = list[list.size()-1].substr(0, i);
  list[list.size()-1].append(temp);
  for (string elem : list) {
    cout << elem << " ";
  }
  return 0;
}
