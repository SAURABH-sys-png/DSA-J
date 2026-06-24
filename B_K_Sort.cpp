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
    vector<ll> arr(n);
    vector<ll> deffi;
    deffi.push_back(0);
    ll maxi = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
        if (maxi - arr[i] > 0)
        {
            ll num = maxi - arr[i];
            deffi.push_back(num);
        }
    }

    ll cost = deffi.size();
    ll sizei = deffi.size();
    ll ans = 0;
    sort(deffi.begin(), deffi.end());

    for (ll i = 1; i < cost; i++)
    {
        ll diff = deffi[i] - deffi[i - 1];
        ans += (diff * sizei);
        sizei--;
    }

    cout << ans << '\n';
}

int main()
{
    fastio
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}