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
    vector<ll> crr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        crr[i] = i + 1;
    }
    ll excess = 0;

    for (ll i = 0; i < n; i++)
    {
        excess += arr[i] - crr[i];
        if (excess < 0)
        {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
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