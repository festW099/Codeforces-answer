#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string xml;
    getline(cin, xml);
    
    int indent = 0;
    int i = 0;
    int n = xml.length();
    vector<string> result;
    
    while (i < n) {
        if (xml[i] == '<') {
            if (i + 1 < n && xml[i+1] == '/') {
                indent--;
                int tag_start = i;
                while (i < n && xml[i] != '>') {
                    i++;
                }
                string tag = xml.substr(tag_start, i - tag_start + 1);
                result.push_back(string(2 * indent, ' ') + tag);
            } else {
                int tag_start = i;
                while (i < n && xml[i] != '>') {
                    i++;
                }
                string tag = xml.substr(tag_start, i - tag_start + 1);
                result.push_back(string(2 * indent, ' ') + tag);
                indent++;
            }
            i++;
        } else {
            i++;
        }
    }
    
    for (const string& line : result) {
        cout << line << endl;
    }
    
    return 0;
}