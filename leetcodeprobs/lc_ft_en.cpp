#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

int just_big_ind(set<int> s, int x)
{
    auto it = s.lower_bound(x);
    if (it == s.begin())
    {
        return *it;
    }
    else if (it == s.end())
    {
        it--;
        return *it;
    }
    else
    {
        int a = *it;
        it--;
        int b = *it;
        if (x - b < a - x)
            return b;
        else
            return a;
    }
}
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int idx = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (idx == nums.size() || nums[idx] != target)
        {
            return {-1, -1};
        }
        else
        {
            int idx_l = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
            return {idx, idx_l - 1};
        }
    }
};

int main()
{
    return 0;
}