#include <iostream>
#include <vector>
using namespace std;

int main() {
    int pl_power, n;
    cin >> pl_power >> n;
    
    vector<pair<int, int>> sp;
    for (int i = 0; i < n; ++i) {
        int power, bonus;
        cin >> power >> bonus;
        sp.push_back({power, bonus});
    }
    
    int win = 0;
    while (win == 0) {
        bool fight = false;
        if (!sp.empty()) {
            for (size_t i = 0; i < sp.size(); ++i) {
                if (pl_power > sp[i].first) {
                    pl_power += sp[i].second;
                    sp.erase(sp.begin() + i);
                    fight = true;
                    break;
                }
            }
            if (!fight) {
                win = 2;
            }
        } else {
            win = 1;
        }
    }
    
    if (win == 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    
    return 0;
}