#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    for (int i = 0; i < n - 2; i++) {
        int check = false;
        int temp = 0;
        int maxj = i + 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                i = j - 1;
                check = true;
                break;
            }
            temp += arr[i] - arr[j];
            if (arr[maxj] <= arr[j]) {
                maxj = j;
            }
        }
        if (arr[maxj] < arr[i] && !check) {
            for (int j = n - 1; j > i - 1; j--) {
                temp = 0;
                for (int k = j - 1; k >= i; k--) {
                    if (arr[k] >= arr[j]) {
                        j = k + 1;
                        break;
                    }
                    temp += (arr[j] - arr[k]);
                }
                res += temp;
            }
            break;
        }
        res += temp;

    }
    cout << res;
}