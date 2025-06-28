#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        double x = n / (1 + k + k * k + k * k * k);
        cout << (int)x << " " << (int)(x * k) << " " << (int)(x * k * k) << " " << (int)(x * k * k * k) << endl;
    }
    return 0;
}