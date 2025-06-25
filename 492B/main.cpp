#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    
    vector<int> sp(n);
    for (int i = 0; i < n; ++i) {
        cin >> sp[i];
    }
    
    sort(sp.begin(), sp.end());
    sp.insert(sp.begin(), 0);
    sp.push_back(l);
    
    double left = 0, right = l;
    double d = 0;
    
    for (int iter = 0; iter < 100; ++iter) {
        double mid = (left + right) / 2;
        bool possible = true;
        
        for (int i = 1; i < sp.size(); ++i) {
            if (sp[i] - sp[i-1] > mid * 2) {
                possible = false;
                break;
            }
        }
        
        if (sp[1] - sp[0] > mid) {
            possible = false;
        }
        if (sp.back() - sp[sp.size()-2] > mid) {
            possible = false;
        }
        
        if (!possible) {
            left = mid;
        } else {
            right = mid;
            d = mid;
        }
    }
    
    cout << fixed << setprecision(10) << d << endl;
    
    return 0;
}