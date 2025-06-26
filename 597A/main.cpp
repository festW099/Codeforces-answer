#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int count = 0;
    while (x > 0) {
        count += x % 2;
        x /= 2;
    }
    cout << count << endl;
    return 0;
}