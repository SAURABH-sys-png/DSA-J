#include <iostream>
#include <vector>

using namespace std; 

class Solution {
public:
    int reverse(int x) {

        long long num = x; 
        if (num < 0) {
            num = -num;
        }

        vector<int> arr;
        int r; // remainder

        int i = 0; 

        while (num != 0) {
            r = num % 10;
            num = num / 10;
            arr.push_back(r);
            i++;
        }

        long long res = 0;

        for (int j = 0; j < arr.size(); j++) {

            res = (res * 10) + arr[j];
        }

        if (x < 0) {
            res = -res;
        }

        if (res > 2147483647 || res < -2147483648) {
            return 0;
        }

        return (int)res;
    }
};

int main() {
    // Problem: reverse integer.
    // Time Complexity: O(...) based on Solution::reverse implementation.
    // Space Complexity: O(...) based on Solution::reverse implementation.
    Solution obj;
    int arg1 = 5;
    auto result = obj.reverse(arg1);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
