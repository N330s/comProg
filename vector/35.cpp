#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  map<string, int> pVal;
  map<string, int> decimal;
  pVal["sip"] = 10;
  pVal["roi"] = 100;
  pVal["phan"] = 1000;
  pVal["muen"] = 10000;
  pVal["saen"] = 100000;
  pVal["lan"] = 1000000;
  decimal["soon"] = 0;
  decimal["yi"] = 2;
  decimal["neung"] = 1;
  decimal["et"] = 1;
  decimal["song"] = 2;
  decimal["sam"] = 3;
  decimal["si"] = 4;
  decimal["ha"] = 5;
  decimal["hok"] = 6;
  decimal["chet"] = 7;
  decimal["paet"] = 8;
  decimal["kao"] = 9;

  string inp;
  while (true){
    getline(cin, inp);
    if (inp == "q") break;
    int result = 0;
    int currDecimalVal = 1;
    stringstream ss(inp);
    string temp;
    while (ss >> temp) {
      if (pVal[temp] == 0) {
        currDecimalVal = decimal[temp];
      }
      else {
        result += pVal[temp] *  currDecimalVal;
        currDecimalVal = 1;
      }
    }
      result += decimal[temp]; 
      cout << result << endl;
  }

  return 0;
}

