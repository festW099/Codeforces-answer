#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    
    int a = 0, b = 0;
    bool flag_a = true;
    int left = 0, right = n - 1;
    
    for (int i = 0; i < n; i++) {
        if (flag_a) {
            if (cards[left] > cards[right]) {
                a += cards[left];
                left++;
            } else {
                a += cards[right];
                right--;
            }
            flag_a = false;
        } else {
            if (cards[left] > cards[right]) {
                b += cards[left];
                left++;
            } else {
                b += cards[right];
                right--;
            }
            flag_a = true;
        }
    }
    
    cout << a << " " << b << endl;
    return 0;
}