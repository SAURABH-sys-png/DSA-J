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
    long long maxTotalValue(vector<int> &nums, int k)
    {
        ll n = nums.size();
        ll ans = 0;
        // {9,2,3,4,7,8,12,3,43,65,34,13}

        sort(nums.begin(), nums.end());
        while (k--)
        {
            ll mini = nums[0];
            ll end_ind = n - 1;
            ans = ans + abs(nums[end_ind] - mini);
            end_ind--;
        }

        return ans;
    }
};

int main()
{

    return 0;
}