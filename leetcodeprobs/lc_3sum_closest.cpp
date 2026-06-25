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
    int threeSumClosest(vector<int> &nums, int target)
    {
        // 1. Sort the array to use the two-pointer approach
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Initialize with the sum of the first three elements to avoid INT_MAX overflow
        int closest_sum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;

            while (j < k)
            {
                int current_sum = nums[i] + nums[j] + nums[k];

                // If we find an exact match, we can return immediately
                if (current_sum == target) {
                    return current_sum;
                }

                // If the current sum is closer to the target than our previous best
                if (abs(current_sum - target) < abs(closest_sum - target))
                {
                    closest_sum = current_sum;
                }

                // Move pointers based on how current_sum compares to target
                if (current_sum < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        return closest_sum;
    }
};

int main()
{
    fastio; // Added your fastio macro usage here
    Solution sol;

    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int ans = sol.threeSumClosest(nums, target);
    cout << ans << '\n'; // Output will be 2 (from triplets -1 + 2 + 1 = 2)

    return 0;
}