#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
  unordered_map<string, double> concurr;
  int n;
  cin >> n;
  string type;
  double val;
  while (n--) {
    cin >> type >> val;
    concurr[type] = val;
  }
  int value;
  cin >> value;
  string curr;
  cin >> curr;
  cin.ignore();
  string inp;
  getline(cin, inp);
  stringstream ss(inp);
  string temp;
  string result;
  result += to_string(value) + " " + curr +  " -> ";
  while (ss >> temp) {
    if (curr == temp) {
      result += to_string(value) + " " + temp + " -> ";
    }
    else if (temp == "THB") {
      value = int(value * concurr[curr]);
      result += to_string(value) + " " + temp + " -> ";
      curr = temp;
    }
    else if (curr == "THB") {
      value = int(value / concurr[temp]);
      result += to_string(value) + " " + temp + " -> ";
      curr = temp;
    }
    else {
      value = int(value * concurr[curr] / concurr[temp]);
      result += to_string(value) + " " + temp + " -> ";
      curr = temp;
    }
  }
  result = result.substr(0, result.length() - 4);
  cout << result;
  return 0;
}
