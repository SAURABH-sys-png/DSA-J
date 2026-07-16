#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

long long maximumScore(vector<int> &nums, int cost)
{
    int n = nums.size();

    vector<long long> dp(n + 2, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        // Remove only this element
        dp[i] = 1LL * nums[i] - cost + dp[i + 1];

        // Remove this and next together
        if (i + 1 < n)
        {
            dp[i] = max(dp[i],
                        1LL * max(nums[i], nums[i + 1]) - cost + dp[i + 2]);
        }
    }

    return dp[0];
}

void solve()
{
    int n, c;
    cin >> n >> c;          // Read input first

    vector<int> nums(n);    // Now n is known

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << maximumScore(nums, c) << '\n';
}

int main()
{
    fastio;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}