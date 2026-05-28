#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
#include <string>

using namespace std;

class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res;

        for (int i = 0; i < n; i++)
        {
            string s = to_string(nums[i]);

            for (int j = 0; j < s.size(); j++)
            {
                int tempo = s[j] - '0';
                res.push_back(tempo);
            }
        }

        return res;
    }
};

int main() {
    // Problem: minimum effort tasks.
    // Time Complexity: O(...) based on Solution::separateDigits implementation.
    // Space Complexity: O(...) based on Solution::separateDigits implementation.
    Solution obj;
    vector<int> arg1 = {1,2,3,4,5};
    auto result = obj.separateDigits(arg1);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
