#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
  map<char, string> num;
  map<int, string> pval;  
  pval[2] = "hundred";
  pval[3] = "thousand";
  pval[2] = "hundred";
  pval[2] = "hundred";
  pval[2] = "hundred";
  pval[2] = "hundred";
  pval[2] = "hundred";
  num['0'] = "zero";
  num['1'] = "one";
  num['2'] = "two";
  num['3'] = "three";
  num['4'] = "four";
  num['5'] = "five";
  num['6'] = "six";
  num['7'] = "seven";
  num['8'] = "eight";
  num['9'] = "nine";
  string n;
  cin >> n;
  for (int i = n.size() - 1; i > 1; i--) {
    cout << num[n[i]] << " ";

  }
  return 0;
}
