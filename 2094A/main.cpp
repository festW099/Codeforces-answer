#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    for (int _ = 0; _ < t; ++_) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        string word;
        string answer;
        
        while (iss >> word) {
            if (!word.empty()) {
                answer += word[0];
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}