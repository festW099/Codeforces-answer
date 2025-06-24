#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sp(n);
    int all = 0;
    for (int i = 0; i < n; ++i) {
        cin >> sp[i];
        all += sp[i];
    }
    set<int> result;

    int current_sum = 0;
    for (int packet : sp) {
        for (int size = 1; size <= packet; ++size) {
            int pr_now = (100 * size) / packet;
            int pr_all = (100 * (current_sum + size)) / all;
            if (pr_now == pr_all) {
                result.insert(pr_now);
            }
        }
        current_sum += packet;
    }
    result.insert(0);
    result.insert(100);

    for (int num : result) {
        cout << num << endl;
    }
    // test
    return 0;
}