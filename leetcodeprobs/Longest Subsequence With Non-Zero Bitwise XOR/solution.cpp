#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestSubsequence(vector<int> &nums)
    {
        // n sq approah
        int xor_for_now = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            xor_for_now = xor_for_now ^ nums[i];
        }
        if (xor_for_now > 0)
        {
            return nums.size();
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (xor_for_now ^ nums[i] == 0)
                {
                    return nums.size() - 1;
                }
            }
            return 0;
        }
        return 0;
    }
};