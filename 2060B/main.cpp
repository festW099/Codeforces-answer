#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> cows(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> cows[i][j];
            }
            sort(cows[i].begin(), cows[i].end());
        }

        vector<int> cow_order(n);
        for (int i = 0; i < n; ++i) cow_order[i] = i;
        sort(cow_order.begin(), cow_order.end(), [&](int a, int b) {
            return cows[a][0] < cows[b][0];
        });

        bool possible = true;
        int current_top = -1;
        vector<int> pointers(n, 0);
        for (int round = 0; round < m && possible; ++round) {
            for (int cow_idx : cow_order) {
                bool found = false;
                while (pointers[cow_idx] < m) {
                    if (cows[cow_idx][pointers[cow_idx]] > current_top) {
                        current_top = cows[cow_idx][pointers[cow_idx]];
                        pointers[cow_idx]++;
                        found = true;
                        break;
                    }
                    pointers[cow_idx]++;
                }
                if (!found) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            for (int i = 0; i < n; ++i) {
                if (i > 0) cout << " ";
                cout << cow_order[i] + 1;
            }
            cout << endl;
            continue;
        }

        sort(cow_order.begin(), cow_order.end(), [&](int a, int b) {
            return cows[a].back() > cows[b].back();
        });

        possible = true;
        current_top = -1;
        fill(pointers.begin(), pointers.end(), 0);
        for (int round = 0; round < m && possible; ++round) {
            for (int cow_idx : cow_order) {
                bool found = false;
                while (pointers[cow_idx] < m) {
                    if (cows[cow_idx][pointers[cow_idx]] > current_top) {
                        current_top = cows[cow_idx][pointers[cow_idx]];
                        pointers[cow_idx]++;
                        found = true;
                        break;
                    }
                    pointers[cow_idx]++;
                }
                if (!found) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            for (int i = 0; i < n; ++i) {
                if (i > 0) cout << " ";
                cout << cow_order[i] + 1;
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}