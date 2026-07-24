#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

ll MOD  = 1e9+7;
void solve()
{
    int n;
    cin >> n;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= 6; x++)
        {
            if (i >= x)
            {
                dp[i] = (dp[i] + dp[i - x]) % MOD;
            }
        }
    }

    cout << dp[n] << '\n';
}

int main()
{
    solve();

    return 0;
}