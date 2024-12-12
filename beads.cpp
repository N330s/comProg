#include <iostream>
#include <vector>

using namespace std;

int sumBeads(vector<int> beads) {
    int sumMax = 0;
    for (int i = 0; i < beads.size(); i++) {
        int sum = 0;
        for (int j = 0; j < beads.size(); j++) {
            int ind = (i + j) % beads.size();
            sum += beads[ind];
            if (beads[(ind + 1) % beads.size()] < beads[ind]) {
                break;
            }
        }
        if (sum > sumMax) {
            sumMax = sum;
        }
    }    
    return sumMax;
}

int main() {
    int n;
    int maxSum = 0;
    vector<int> beads;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        beads.push_back(x);
    }
    int sum = sumBeads(beads);
    if (maxSum < sum) {
        maxSum = sum;
    }
    for (int i = 0; i < n; i++) {
        vector<int> temp = beads;
        temp.erase(temp.begin() + i);
        int sum = sumBeads(temp);
        if (maxSum < sum) {
            maxSum = sum;
        }
    }
    cout << maxSum;
}