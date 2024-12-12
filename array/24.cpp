#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* pan = new int[n];
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        pan[i] = inp;
    }
    for (int l = 0; l < n; l++) {
        cout << pan[l] << " ";
    }
    cout << endl;
    for (int i = n - 1; i > 0; i--) {
        int mxind = 0;
        for (int j = 0; j < i; j++) {
            if (pan[j] > pan[mxind]) {
                mxind = j;
            }
        }
        if (pan[i] >= pan[mxind]) {
            continue;
        }
        if (pan[mxind] > pan[0]) {
            for (int k = 0; k <= mxind / 2; k++) {
                swap(pan[k], pan[mxind - k]);
            }
            for (int l = 0; l < n; l++) {
                cout << pan[l] << " ";
            }
            cout << endl;
        }
        if (pan[0] > pan[i]) {
            for (int k = 0; k <= i / 2; k++) {
                swap(pan[k], pan[i - k]);
            }
            for (int l = 0; l < n; l++) {
                cout << pan[l] << " ";
            }
            cout << endl;
        }
    }
    delete(pan);
}