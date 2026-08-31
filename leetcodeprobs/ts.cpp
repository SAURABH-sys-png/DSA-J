#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            int need = target - num;
            if (need == num)
                continue;
            if (mp.find(need) != mp.end())
            {
                return {i, mp[need]};
            }
            mp[num]++;
        }
        return {};
    }
};
int main()
{

    return 0;
}