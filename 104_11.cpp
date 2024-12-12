#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> board;
bool check(int i, int j) {  
//row
  for (int k = 0; k < board.size(); k++) {
    if (k == j) continue;
    if (board[i][k] == 'Q') return true;
  }
//column
  for (int k = 0; k < board.size(); k++) {
    if (k == i) continue;
    if (board[k][j] == 'Q') return true;
  }
//diagonal left 
  int r = i + 1, c = j + 1;
  while (r < board.size() && c < board.size()) {
    if (board[r][c] == 'Q') return true;
    r += 1;
    c += 1;
  }
  r = i - 1, c = j - 1;
  while (r >= 0 && c >= 0) {
    if (board[r][c] == 'Q') return true;
    r -= 1;
    c -= 1;
  }
//diagonal right
  r = i + 1, c = j - 1;
  while (r < board.size() && c >= 0) {
    if (board[r][c] == 'Q') return true;
    r += 1;
    c -= 1;
  } 
  r = i - 1, c = j + 1;
  while (r >= 0 && c < board.size()) {
    if (board[r][c] == 'Q') return true;
    r -= 1;
    c += 1;
  }
  return false;
}

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string inp;
    cin >> inp;
    vector<char> temp;
    for (int j = 0; j < n; j++) {
      temp.push_back(inp[j]);
    }
    board.push_back(temp);
    temp.clear();
  }
  vector<vector<char>> result = board;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == 'Q') {
        if (check(i, j)) {
          result[i][j] = '-';
        }
      }
    }
  }
  for (auto i : result) {
    for (auto j : i) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
