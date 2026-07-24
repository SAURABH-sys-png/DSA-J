#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 1000000007;
int ways(const vector<int> &coins, int sum)
{
    vector<int> dp(sum + 1);
    dp[0] = 1;
    for (int i = 1; i <= sum; i++)
    {
        long long cur = 0;
        for (int x : coins)
        {
            if (x > i)
                break;
            cur += dp[i - x];
            if (cur >= MOD)
                cur %= MOD;
        }
        dp[i] = cur;
    }
    return dp[sum];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, sum;
    cin >> n >> sum;
    vector<int> coins(n);
    for (int &x : coins)
        cin >> x;
    sort(coins.begin(), coins.end());
    cout << ways(coins, sum);
}