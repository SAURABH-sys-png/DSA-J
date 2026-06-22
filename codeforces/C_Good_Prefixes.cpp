#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll curr_sum = 0;
    ll curr_max = INT16_MIN;
    ll res = 0;

    vector<ll> pref_sum(n);
    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        curr_sum += nums[i];
        pref_sum[i] = curr_sum;
        curr_max = max(curr_max, nums[i]);

        if (pref_sum[i] - curr_max == curr_max)
        {
            res++;
        }
    }

    cout << res << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}