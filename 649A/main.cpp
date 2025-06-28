#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sp(n);
    for (int i = 0; i < n; ++i) {
        cin >> sp[i];
    }
    
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if (sp[i] % 2 == 0) {
            flag = false;
        }
    }
    
    if (flag) {
        cout << "1 " << n << endl;
    } else {
        int number = 1;
        while (true) {
            int kolvo = 0;
            for (int i = 0; i < n; ++i) {
                if (sp[i] % number == 0) {
                    kolvo += 1;
                }
            }
            if (kolvo > 0) {
                number *= 2;
            } else {
                number /= 2;
                break;
            }
        }
        
        int answer = 0;
        for (int i = 0; i < n; ++i) {
            if (sp[i] % number == 0) {
                answer += 1;
            }
        }
        
        cout << number << " " << answer << endl;
    }
    
    return 0;
}