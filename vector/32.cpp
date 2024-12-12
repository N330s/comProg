#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int sum (vector<int> list) {
  int sum = 0;
  for (int i : list) {
    sum += i;
  }
  return sum;
}

void first (vector<int> list) {
  vector<vector<int>> result;
  for (auto &i : list) {
    bool check = false;
    for (int j = 0; j < result.size(); j++) {
      if (i + sum(result[j]) > 100) {
        continue;
      }
      else {
        result[j].push_back(i);
        i = 200;
        check = true;
      }
    }
    if (!check) {
      result.push_back(vector<int>{i});
    }
  }
  for(int i = 0; i < result.size(); i++) {
    sort(result[i].begin(), result[i].end());
  }
  sort(result.begin(), result.end(), [](vector<int> &a, vector<int> &b){
    if (sum(a) == sum(b)) {
      if (a.size() == b.size()) return a < b;
      return a.size() < b.size();
    } 

    return sum(a) > sum(b);
  });
  for (int i = 0; i < result.size(); i++) {
    for (int j : result[i]) cout << j << " ";
    cout << endl;
  }
}

void best(vector<int> list) {
  vector<vector<int>> result;
  result.push_back({list[0]});
  list.erase(list.begin());
  for (auto &i : list) {
    bool check = false;
    int sumb = 0;
    int b = 0;
    for (int j = 0; j < result.size(); j++) {
      if (sum(result[j]) > sumb && i + sum(result[j]) <= 100) {
        b = j;
        sumb = sum(result[j]);
        check = true;
      }
    }
    if (!check) {
      result.push_back({i});
      i = 200;
    }
    else {
      result[b].push_back(i);
      i = 200;
      sumb = 0;
    }
  }

  for(int i = 0; i < result.size(); i++) {
    sort(result[i].begin(), result[i].end());
  }

  sort(result.begin(), result.end(), [](vector<int> &a, vector<int> &b){
    if (sum(a) == sum(b)) {
      if (a.size() == b.size()) return a < b;
      return a.size() < b.size();
    } 

    return sum(a) > sum(b);
  });
  for (int i = 0; i < result.size(); i++) {
    for (int j : result[i]) cout << j << " ";
    cout << endl;
  }
}

int main(int argc, char const *argv[])
{
  vector<int> list;
  string inp;
  string mode;
  cin >> mode;
  cin.ignore();
  getline(cin, inp);
  stringstream ss(inp);
  string temp;
  while (ss >> temp) {
    list.push_back(stoi(temp));
  }
  if (mode == "first") first(list);
  else if (mode == "best") best(list);

  return 0;
}
