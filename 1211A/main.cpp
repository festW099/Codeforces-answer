#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sp_r(n);
    for (int i = 0; i < n; ++i) {
        cin >> sp_r[i];
    }
    
    set<int> unique_sp(sp_r.begin(), sp_r.end());
    if (unique_sp.size() < 3) {
        cout << "-1 -1 -1" << endl;
        return 0;
    }
    
    vector<int> sp(unique_sp.begin(), unique_sp.end());
    sort(sp.begin(), sp.end());
    
    int mn = sp[0];
    int middle = sp[1];
    int mx = sp.back();
    
    // Находим индексы (нумерация с 1)
    int idx_mn = -1, idx_middle = -1, idx_mx = -1;
    for (int i = 0; i < n; ++i) {
        if (idx_mn == -1 && sp_r[i] == mn) {
            idx_mn = i + 1;
        }
        if (idx_middle == -1 && sp_r[i] == middle) {
            idx_middle = i + 1;
        }
        if (idx_mx == -1 && sp_r[i] == mx) {
            idx_mx = i + 1;
        }
        // Если все индексы найдены, можно выйти из цикла
        if (idx_mn != -1 && idx_middle != -1 && idx_mx != -1) {
            break;
        }
    }
    
    cout << idx_mn << " " << idx_middle << " " << idx_mx << endl;
    
    return 0;
}