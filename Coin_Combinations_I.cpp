#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;
ll MOD = 1e9 + 7;

int waya(vector<int> coins, int sum)
{
    int n = sum;
    int sz = coins.size();

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int x : coins)
        {
            if (i >= x)
            {
                dp[i] = (dp[i] + dp[i - x]) % MOD;
            }
        }
    }

    return dp[n];
}
void solve()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ans = waya(nums,sum);
    cout << ans << '\n';
}

int main()
{
    solve();
    return 0;
}