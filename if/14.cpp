#include <iostream>

using namespace std;

struct student {
  string number;
  char comp, cal1, cal2;
  float grade;
};

bool Isvalid (student a) {
  return (a.comp == 'A') && (a.cal1 <= 'C' && a.cal2 <= 'C');
}

string Winner (student a, student b) {
  if (a.grade > b.grade) {
    return a.number;
  }
  else if (b.grade > a.grade) {
    return b.number;
  }
  else if (a.comp < b.comp) {
    return a.number;
  }
  else if (b.comp < a.comp) {
    return b.number;
  }
  else if (a.cal1 < b.cal1) {
    return a.number;
  }
  else if (b.cal1 < a.cal1) {
    return b.number;
  }
  else if (a.cal2 < b.cal2) {
    return a.number;
  }
  else if (b.cal2 < a.cal2) {
    return b.number;
  }
  else {
    return "Both";
  }
}

int main(int argc, char const *argv[])
{
  student a;
  student b;
  cin >> a.number >> a.grade >> a.comp >> a.cal1 >> a.cal2;
  cin >> b.number >> b.grade >> b.comp >> b.cal1 >> b.cal2; 
  if (!(Isvalid(a) || Isvalid(b))) {
    cout << "None";
    return 0;
  }
  cout << Winner(a, b);
  return 0;
}
