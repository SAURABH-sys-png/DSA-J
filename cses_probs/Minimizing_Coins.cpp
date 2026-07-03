#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, sum;
    cin >> n >> sum;

    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];

    vector<ll> dpt(sum + 1, INT_MAX);
    dpt[0] = 0;

    for (ll i = 1; i <= sum; i++)
    {
        for (ll coin : nums)
        {
            if (i >= coin && dpt[i - coin] != INT_MAX)
            {
                dpt[i] = min(dpt[i], dpt[i - coin] + 1);
            }
        }
    }

    if (dpt[sum] == INT_MAX)
        cout << -1 << '\n';
    else
        cout << dpt[sum] << '\n';
}

int main()
{
    solve();
    return 0;
}