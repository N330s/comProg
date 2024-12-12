#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> table;
unordered_map <string, int> track;
vector<pair<int, string>> result;

void combi(string curr, int l) {
    if (curr.size() == l) {
        sort(curr.begin(), curr.end());
        if (track[curr] != 0) {
            result[track[curr] - 1].first += 1;;
        }
        else {
            result.push_back({1, curr});
            track[curr] = result.size();
        }
    }
    else {
        for (int i = 0; i < table[curr.size()].size(); i++) {
            string temp = curr;
            temp.push_back(table[curr.size()][i]);
            combi(temp, l);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int l = n;
    while (n--) {
        string inp;
        cin >> inp;
        table.push_back(inp);
    }
    int m;
    cin >> m;
    combi("", l);
    sort(result.begin(), result.end(), [](pair<int, string> a, pair<int, string> b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });
    int j = 0;
    for (auto i : result) {
        if (j == m) {
           return 0;
        }
        cout << i.second << endl;
        j++;
    }
}
