#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    map <string, map<string, int>> table;
    map <string, set<string>> result;
    map<string, vector<string>> bid;
    map<string, int> price;
    vector<string> allbid;
    cin >> n;
    while (n--) {
        char chs;
        cin >> chs;
        if (chs == 'B') {
            string bidder, product;
            int value;
            cin >> bidder >> product >> value;
            table[product][bidder] = value;
            if (find(bid[product].begin(), bid[product].end(), bidder) != bid[product].end()) {
                bid[product].erase(find(bid[product].begin(), bid[product].end(), bidder));
            }
            bid[product].push_back(bidder);
            if (find(allbid.begin(), allbid.end(), bidder) == allbid.end()) {
                allbid.push_back(bidder);
            }
        }
        else if (chs == 'W') {
            string bidder, product;
            cin >> bidder >> product;
            table[product][bidder] = 0;
            bid[product].erase(find(bid[product].begin(), bid[product].end(), bidder));
        }
    }
    for (auto i : table) {
        int valmax = 0;
        string bidmax;
        for (string elem : bid[i.first]) {
            if (table[i.first][elem] > valmax) {
                valmax = table[i.first][elem];
                bidmax = elem;
            }
        }
        result[bidmax].insert(i.first);
        price[bidmax] += valmax;
    }
    for (auto i : allbid) {
        cout << i << ": $" <<  price[i] << " ";
        if (result[i].size() != 0) {
            cout << "-> ";
        }
        for (auto j : result[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

}