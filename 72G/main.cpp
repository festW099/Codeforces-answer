#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    if (n == 1) {
        std::cout << 1;
    } else {
        int number = 1;
        std::vector<int> last = {1};
        
        for (int i = 0; i < n - 1; ++i) {
            int sum = 0;
            for (int num : last) {
                sum += num;
            }
            number += sum;
            last.push_back(number);
        }
        
        std::cout << number;
    }
    
    return 0;
}