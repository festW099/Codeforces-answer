#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int full = n / m;
    int rest = n % m;
    int cost = full * b + min(rest * a, b);
    cost = min(cost, n * a);
    cout << cost;
    return 0;
}
