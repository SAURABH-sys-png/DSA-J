#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:
    int countMajoritySubarrays(vector<int> &nums, int target)
    {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            vector<int> curr_arr;

            for (int j = i; j < n; j++)
            {
                if (nums[j] == target)
                {
                    count++;
                }
                curr_arr.push_back(nums[j]);
                int lenght = curr_arr.size();
                if (2 * count > lenght)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {2,2,3,2,2,90,2};
    int target = 2;

    Solution sol;
    int ans = sol.countMajoritySubarrays(nums, target);

    cout << ans << '\n';

    return 0;
}