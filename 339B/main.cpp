#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> sp(m);
    for (int i = 0; i < m; i++) {
        cin >> sp[i];
    }
    
    reverse(sp.begin(), sp.end());
    sp.push_back(1);
    reverse(sp.begin(), sp.end());
    
    long long time = 0;
    
    for (int i = 0; i < m; i++) {
        if (sp[i] < sp[i + 1]) {
            time += sp[i + 1] - sp[i];
        } else if (sp[i] > sp[i + 1]) {
            time += n - sp[i] + sp[i + 1];
        }
    }
    
    cout << time << endl;
    
    return 0;
}