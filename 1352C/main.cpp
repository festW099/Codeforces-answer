#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << k + (k - 1) / (n - 1) << endl;
    }
    return 0;
}