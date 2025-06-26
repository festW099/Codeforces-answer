#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sp_x(n);
    for (int i = 0; i < n; ++i) {
        cin >> sp_x[i];
    }
    sort(sp_x.begin(), sp_x.end());
    
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int m;
        cin >> m;
        auto it = upper_bound(sp_x.begin(), sp_x.end(), m);
        int can = distance(sp_x.begin(), it);
        cout << can << endl;
    }
    
    return 0;
}