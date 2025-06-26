#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (a.empty()) {
        cout << 0 << endl;
        return 0;
    }

    int max_num = *max_element(a.begin(), a.end());
    vector<long long> count(max_num + 2, 0);

    for (int num : a) {
        count[num]++;
    }

    vector<long long> dp(max_num + 2, 0);
    dp[1] = count[1] * 1;

    for (int x = 2; x <= max_num; ++x) {
        dp[x] = max(dp[x - 1], dp[x - 2] + x * count[x]);
    }

    cout << dp[max_num] << endl;

    return 0;
}