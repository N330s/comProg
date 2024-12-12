#include <iostream>

using namespace std;

bool isLeap(int y) {
    if (y % 4 == 0) {
        if (!(y % 100 == 0) || y % 400 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int dateInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m, y;
    cin >> d >> m >> y;
    y -= 543;
    int allYear = 365;
    if (isLeap(y)) {
        dateInMonth[1] += 1;
        allYear = 366;
    }
    int result = dateInMonth[m - 1] - d + 1;
    for (int i = m; i < 12; i++) {
        result += dateInMonth[i];
    }
    cout << allYear - result + 1;
}