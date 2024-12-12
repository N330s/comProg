#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a > b)
        swap (a, b);
    if (c > d) 
        swap (c, d);
    if (a > c)
        swap (a, c);
    
}