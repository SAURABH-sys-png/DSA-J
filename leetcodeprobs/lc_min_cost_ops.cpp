#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

const int mod = 1e9 + 7;
class Solution
{
public:
    int minimumCost(vector<int> &nums, int k)
    {

        int resources = k;

        int n = nums.size();

        int ans = 0;
        int cost = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= resources)
            {
                resources -= nums[i];
            }
            else
            {
                long long diff = nums[i] - resources;
                int tmp = ceil((double)diff / k);
                cost += tmp;
                resources += tmp * k;
                resources -= nums[i];
            }
        }
        return (long long)(cost % mod) * ((cost + 1LL) % mod) % mod * 500000004 % mod;
    }
};

int main()
{
    Solution sol;

    return 0;
}