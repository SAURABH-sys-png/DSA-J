#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution
{
public:
    bool isGood(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                if (nums[i] != (i + 1))
                {
                    return false;
                }
            }
            else
            {
                if (nums[i] != n - 1)
                {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    // Problem: good array validator.
    // Time Complexity: O(...) based on Solution::isGood implementation.
    // Space Complexity: O(...) based on Solution::isGood implementation.
    Solution obj;
    vector<int> arg1 = {1,2,3,4,5};
    auto result = obj.isGood(arg1);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
