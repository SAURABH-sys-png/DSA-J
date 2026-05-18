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

int main()
{
    return 0;
}