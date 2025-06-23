#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = true;
    string s = to_string(n);
    
    for (char c : s) {
        if (c != '4' && c != '7') {
            flag = false;
            break;
        }
    }
    
    if (flag) {
        cout << "YES";
        return 0;
    }
    
    bool almost = false;
    for (int i = 1; i <= n; i++) {
        bool flag_i = true;
        string num = to_string(i);
        
        for (char c : num) {
            if (c != '4' && c != '7') {
                flag_i = false;
                break;
            }
        }
        
        if (flag_i && n % i == 0) {
            almost = true;
            break;
        }
    }
    
    cout << (almost ? "YES" : "NO");
    return 0;
}