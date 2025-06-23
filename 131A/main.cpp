#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    
    bool allUpper = true;
    bool firstLowerRestUpper = !a.empty() && islower(a[0]);
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (isupper(a[i])) {
            if (i == 0) firstLowerRestUpper = false;
        } else {
            allUpper = false;
            if (i != 0) firstLowerRestUpper = false;
        }
    }
    
    if (allUpper || firstLowerRestUpper) {
        for (char &c : a) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
        }
        cout << a << endl;
    } else {
        cout << a << endl;
    }
    
    return 0;
}