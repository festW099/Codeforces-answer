#include <iostream>
#include <string>
using namespace std;

string find_min(int m, int s) {
    if (s == 0) {
        return (m == 1) ? "0" : "";
    }
    string res;
    int remaining = s;
    for (int i = 0; i < m; ++i) {
        int lower = (i == 0) ? 1 : 0;
        int upper = 9;
        bool found = false;
        for (int d = lower; d <= upper; ++d) {
            int max_remaining = (m - 1 - i) * 9;
            if (remaining - d >= 0 && remaining - d <= max_remaining) {
                res += to_string(d);
                remaining -= d;
                found = true;
                break;
            }
        }
        if (!found) {
            return "";
        }
    }
    return res;
}

string find_max(int m, int s) {
    if (s == 0) {
        return (m == 1) ? "0" : "";
    }
    string res;
    int remaining = s;
    for (int i = 0; i < m; ++i) {
        int upper = 9;
        int lower = (i == 0) ? 1 : 0;
        bool found = false;
        for (int d = upper; d >= lower; --d) {
            int max_remaining = (m - 1 - i) * 9;
            if (remaining - d >= 0 && remaining - d <= max_remaining) {
                res += to_string(d);
                remaining -= d;
                found = true;
                break;
            }
        }
        if (!found) {
            return "";
        }
    }
    return res;
}

int main() {
    int m, s;
    cin >> m >> s;

    if (s == 0) {
        if (m == 1) {
            cout << "0 0" << endl;
        } else {
            cout << "-1 -1" << endl;
        }
    } else {
        if (s > 9 * m) {
            cout << "-1 -1" << endl;
        } else {
            string min_num = find_min(m, s);
            string max_num = find_max(m, s);
            if (min_num.empty() || max_num.empty()) {
                cout << "-1 -1" << endl;
            } else {
                cout << min_num << " " << max_num << endl;
            }
        }
    }
    return 0;
}