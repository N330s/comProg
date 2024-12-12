#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>

int main(int argc, char const *argv[])
{
  std::unordered_map<std::string, int>gradeList;
  std::unordered_map<std::string, int>student;
  std::string toGrade[] = {"F", "D", "D+", "C", "C+", "B", "B+", "A", "A+"};
  gradeList["A+"] = 8; 
  gradeList["A"] = 7; 
  gradeList["B+"] = 6; 
  gradeList["B"] = 5; 
  gradeList["C+"] = 4; 
  gradeList["C"] = 3;
  gradeList["D+"] = 2;
  gradeList["D"] = 1;
  gradeList["F"] = 0;

  int n = 0;
  std::cin >> n;
  while (n--) {
    std::string inp1;
    std::string inp2;
    std::cin >> inp1 >> inp2;
    student[inp1] = gradeList[inp2];
  }


  return 0;
}
