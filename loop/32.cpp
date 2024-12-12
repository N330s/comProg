#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

enum conv {
  R = 1, Y , G, N, B, P, K
};

int main(int argc, char const *argv[])
{
  unordered_map<char, conv> conv;
  conv['R'] = R;
  conv['Y'] = Y;
  conv['G'] = G;
  conv['N'] = N;
  conv['B'] = B;
  conv['P'] = P;
  conv['K'] = K;
  int n = 0;
  cin >> n;
  cin.ignore();
  while (n--) {
    string inp;
    getline(cin, inp);
    stringstream ss(inp);
    string temp;
    int i = 0;
    int point = 0;
    char must = '0';
    while (ss >> temp) {
      if (must == 'e') {
        point = 0;
        cout << "WRONG_INPUT" << endl;
        break;
      }
      if (i == 0 && temp[0] != 'R') {
        point = 0;
        cout << "WRONG_INPUT" << endl;
        break;
      }  
      if (i % 2 == 1 && temp[0] == 'R') {
        point = 0;
        cout << "WRONG_INPUT" << endl;
        break;
      }
      // if (i % 2 == 1 && temp[0] == 'Y') {
      //   point = 0;
      //   cout << "WRONG_INPUT" << endl;
      //   break;
      // }
      if (must != '0' && temp[0] != must) {
        point = 0;
        cout << "WRONG_INPUT" << endl;
        break;
      }
      if (temp[0] == 'Y' && i % 2 == 0) must = 'G';
      if (must == '0' && i % 2 == 0 && temp[0] != 'R') {
        point = 0;
        cout << "WRONG_INPUT" << endl;
        break;
      }
      if (temp[0] == 'G' && must != '0') must = 'N';
      if (temp[0] == 'N' && must != '0') must = 'B';
      if (temp[0] == 'B' && must != '0') must = 'P';
      if (temp[0] == 'P' && must != '0') must = 'K';
      if (temp[0] == 'K' && must != '0') must = 'e';
      i++;
      point += conv[temp[0]];
    }
    if (point) cout << point << endl;
  }
  return 0;
}
