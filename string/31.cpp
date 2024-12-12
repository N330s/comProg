#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

string Encode(string inp);
string Decode(string inp);
string templ;
map<string, char> table;
map<char, string> enc;

int main(int argc, char const *argv[])
{
  table["UUUU"] = '0';
  table["UUUL"] = '1';
  table["UULU"] = '2';
  table["UULL"] = '3';
  table["ULUU"] = '4';
  table["ULUL"] = '5';
  table["ULLU"] = '6';
  table["ULLL"] = '7';
  table["LUUU"] = '8';
  table["LUUL"] = '9';
  table["LULU"] = '-';
  table["LULL"] = ',';
  enc['0'] = "UUUU";
  enc['1'] = "UUUL";
  enc['2'] = "UULU";
  enc['3'] = "UULL";
  enc['4'] = "ULUU";
  enc['5'] = "ULUL";
  enc['6'] = "ULLU";
  enc['7'] = "ULLL";
  enc['8'] = "LUUU";
  enc['9'] = "LUUL";
  enc['-'] = "LULU";
  enc[','] = "LULL";
  getline(cin, templ);
  char chs;
  while (cin >> chs) {
    string inp;
    cin.ignore();
    getline(cin, inp);
    if (chs == 'E') cout << Encode(inp) << endl;
    if (chs == 'D') cout << Decode(inp) << endl;
  }
  return 0;
}

string Decode (string inp) {
  string ret;
  string temp = "";
  int i = 0;
  while (true) {
    if (i >= inp.size())
      break;
    while (temp.size() <= 3) {
      if (i >= inp.size())
        break;
      if (!isalpha(inp[i])) {
        i+=1;
        continue;
      }
      if (isupper(inp[i])) 
        temp.push_back('U');
      if (islower(inp[i]))
        temp.push_back('L');
      i += 1;
    }
    ret.push_back(table[temp]);
    temp.clear();
  }
  return ret; 
}

string Encode (string inp) {
  string ret;
  int itr = 0;
  for (int i = 0; i < inp.size(); i++) {
    int j = 0;
    string code = enc[inp[i]];
    while (j < 4) {
      if (itr == templ.size()) 
        itr = 0;
      if (!isalpha(templ[itr])) {
        ret.push_back(templ[itr]);
        itr += 1;
        continue;
      }
      if (code[j] == 'U') {
        ret.push_back(toupper(templ[itr]));
      } 
      if (code[j] == 'L') {
        ret.push_back(tolower(templ[itr]));
      }
      itr++;
      j++;
    }
  }
  return ret;
}