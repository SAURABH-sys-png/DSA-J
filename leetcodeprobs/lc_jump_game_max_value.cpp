#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

class Solution
{
public:
    vector<int> maxValue(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> maxLeft;
        vector<int> ans(n);

        int maxtil = -1;
        for (int i = 0; i < n; i++)
        {
            if (maxtil > nums[i])
            {
                maxLeft.push_back(maxtil);
            }
            else if (nums[i] > maxtil)
            {
                maxLeft.push_back(nums[i]);
                maxtil = nums[i];
            }
            else
            {
                maxLeft.push_back(nums[i]);
            }
        }

        int minimu = INT_MAX;

        for (int k = n - 1; k >= 0; k--)
        {
            if (maxLeft[k] > minimu)
            {
                ans[k] = ans[k + 1];
            }
            else
            {
                ans[k] = maxLeft[k];
            }

            minimu = min(minimu, nums[k]);
        }
        return ans;
    }
};

int main() {
    // Problem: jump game max value.
    // Time Complexity: O(...) based on Solution::maxValue implementation.
    // Space Complexity: O(...) based on Solution::maxValue implementation.
    Solution obj;
    vector<int> arg1 = {1,2,3,4,5};
    auto result = obj.maxValue(arg1);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
