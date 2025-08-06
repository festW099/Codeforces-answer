#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int _ = 0; _ < t; ++_) {
        int n;
        cin >> n;
        vector<int> sp = {0, 1, 0, 3, 2, 0, 2, 5};
        vector<int> sp_num(n);
        for (int i = 0; i < n; ++i) {
            cin >> sp_num[i];
        }
        bool found = false;
        for (int i = 0; i < n; ++i) {
            auto it = find(sp.begin(), sp.end(), sp_num[i]);
            if (it != sp.end()) {
                sp.erase(it);
            }
            if (sp.empty()) {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << 0 << endl;
        }
    }
    return 0;
}