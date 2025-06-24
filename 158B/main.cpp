#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> friends(n);
    for (int i = 0; i < n; ++i) {
        cin >> friends[i];
    }

    int taxi = 0;

    int one = count(friends.begin(), friends.end(), 1);
    int two = count(friends.begin(), friends.end(), 2);
    int three = count(friends.begin(), friends.end(), 3);
    int four = count(friends.begin(), friends.end(), 4);

    taxi += four;

    int min_31 = min(three, one);
    taxi += min_31;
    three -= min_31;
    one -= min_31;

    taxi += two / 2;
    two = two % 2;

    if (two > 0) {
        taxi += 1;
        one = max(0, one - 2);
    }

    taxi += ceil(one / 4.0);

    taxi += three;

    cout << taxi << endl;

    return 0;
}