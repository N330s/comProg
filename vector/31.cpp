#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  char convBack[5] = {'B', 'I', 'N', 'G', 'O'};
  map<char, int> conv;  
  conv['B'] = 0;
  conv['I'] = 1;
  conv['N'] = 2;
  conv['G'] = 3;
  conv['O'] = 4;
  vector<vector<int>> tile = {{}, {}, {}, {}, {}};
  string temp;
  int inp = 0;
  for (int i = 0; i < 5; i++) std::cin >> temp;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == 2 && j == 2) {
        cin >> temp;
        tile[i].push_back(1e7);
      }
      else{
        cin >> inp;
        tile[i].push_back(inp);
    }
    }
  }
  vector<vector<bool>> bingo = {{false, false, false, false, false},
    {false, false, false, false, false},
    {false, false, true, false, false},
    {false, false, false, false, false},
    {false, false, false, false, false} };

    int count = 0;
  while(cin >> temp){
    bool printed = false;
    count += 1;
    int i = conv[temp[0]];
    temp.erase(temp.begin());
    int num = stoi(temp);
    for (int j = 0; j < 5; j++) {
      if (tile[j][i] == num) bingo[j][i] = true;
    }

  bool checkRow = true, checkColumn = true,  checkL = true,  checkR = true;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      checkRow = checkRow && bingo[i][j];
    }
    if (checkRow) {
      printed = true;
      cout << count << "\n";
      for (int j = 0; j < 5; j++) {
        if (i == 2 && j == 2) continue;
        if (j == 4) {
          cout << convBack[j] << tile[i][j] << endl;
          break;
        }
        cout << convBack[j] << tile[i][j] << ", "; 
      }
      break;
    }
    checkRow = true;
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      checkColumn = checkColumn && bingo[j][i];
    }
    if (checkColumn) {
      if (!printed) cout << count << "\n";
      printed = true;
      for (int j = 0; j < 5; j++) {
        if (i == 2 && j == 2) continue;
        if (j == 4) {
          cout << convBack[i] << tile[j][i] << endl;
          break;
        }
        cout << convBack[i] << tile[j][i] << ", "; 
      }
    }
    checkColumn = true;
  }

  checkL = bingo[0][0] && bingo[1][1] && bingo[2][2] && bingo[3][3] && bingo[4][4];
  if (checkL) {
    if (!printed) cout << count << "\n";
    printed = true;
    for (int j = 0; j < 5; j++) {
      if (j == 2) continue;
      if (j == 4) {
        cout << convBack[j] << tile[j][j] << endl;
        break;
      }
      cout << convBack[j] << tile[j][j] << ", "; 
    }
  }
  checkR = bingo[4][0] && bingo[3][1] && bingo[2][2] && bingo[1][3] && bingo[0][4];
  if (checkR) {
    if (!printed) cout << count << "\n";
    printed = true;
    for (int j = 0; j < 5; j++) {
      if (j == 2) continue;
      if (j == 4) {
        cout << convBack[j] << tile[4-j][j] << endl;
        break;
      }
      cout << convBack[j] << tile[4-j][j] << ", "; 
    }
  }

  if (printed) return 0;
  } 

  return 0;
}
