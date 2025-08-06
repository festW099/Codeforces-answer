#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int mini = x[0] - '0';
        for (char c : x) {
            int digit = c - '0';
            if (digit < mini) {
                mini = digit;
            }
        }
        cout << mini << endl;
    }
    return 0;
}