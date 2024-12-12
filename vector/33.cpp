#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main(int argc, char const *argv[])
{
  int sumScore = 0;
  std::vector<std::string> name;
  std::vector<int> score; 
  std::vector<int> number;
  std::vector<float>beforeConvert;
  std::vector<float>stillDecimal;
  while (true) {
    std::string inp1 = "";
    int inp2 = 0;
    std::cin >> inp1;
    if (inp1 == "END") break;
    std::cin >> inp2;
    name.push_back(inp1);
    score.push_back(inp2);
  }
  for (int itr : score) sumScore += itr;
  float scoreEach = sumScore / 100;
  for (int i = 0; i < score.size(); i++) {
    beforeConvert.push_back(score[i] / scoreEach);
    number.push_back(beforeConvert[i]);
  }
  for (int i = 0; i < score.size(); i++) {
    stillDecimal.push_back(beforeConvert[i] - number[i]);
  }
  //find total nubmer;
  int totalNumber = 0;
  for (int itr : number) {
    totalNumber += itr;
  }
  int stillEmptySlot = 100 - totalNumber;
  while (stillEmptySlot--) {
    auto it = std::max_element(stillDecimal.begin(), stillDecimal.end());
    int pos = it - stillDecimal.begin();
    number[pos] += 1;
    *it = 0;
  }
  int n = name.size();
  while (n--) {
    auto pos = std::max_element(score.begin(), score.end());
    int i = pos - score.begin();
    if (number[i] == 0) break;
    std::cout << name[i] << " " << number[i] << " " << score[i] << "\n";
    *pos = 0;
  }
  return 0;
}
