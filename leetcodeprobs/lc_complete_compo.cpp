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
    vector<vector<int>> threeSum(vector<int> &nums, int st, long long target)
    {
        vector<vector<int>> result;
        int n = nums.size();
        for (int i = st; i < n - 2; ++i)
        {
            if (i > st && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                long long sum = (long long)nums[i] + nums[left] + nums[right];

                if (sum == target)
                {
                    result.push_back({nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return result;
    }

    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        if (nums.size() < 4)
            return {};

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        for (int i = 0; i < nums.size() - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            long long need = (long long)target - nums[i];

            vector<vector<int>> need_tg = threeSum(nums, i + 1, need);

            if (need_tg.size())
            {
                for (auto &row : need_tg)
                {
                    row.push_back(nums[i]);
                    result.push_back(row);
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1000000000, 1000000000, 1000000000, 1000000000};
    int target = 0;
    vector<vector<int>> result = sol.fourSum(nums, target);
    for (const auto &quadruplet : result)
    {
        cout << "[";
        for (size_t i = 0; i < quadruplet.size(); ++i)
        {
            cout << quadruplet[i];
            if (i < quadruplet.size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}