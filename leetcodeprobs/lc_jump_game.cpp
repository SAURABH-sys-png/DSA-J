#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 0 || n == 1)
            return true;

        int maxReach = 0;
        int currReach = 0;
        int jump = 0;

        for (int i = 0; i < n; i++)
        {
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= n - 1)
            {
                return true;
            }

            if (i == currReach)
            {

                if (maxReach == i)
                {
                    return false;
                }

                else
                {
                    jump++;
                    currReach = maxReach;
                }
            }

            if (maxReach >= n - 1)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << sol.canJump(nums) << endl;
    return 0;
}