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
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    if (n == 2)
    {
        sort(b.rbegin(), b.rend()); // Sort descending
        cout << b[0] << " " << b[1] << "\n";
        return;
    }

    sort(b.rbegin(), b.rend());

    for (ll i = 2; i < n; i++)
    {
        if (b[i] != b[i - 2] % b[i - 1])
        {
            cout << -1 << "\n";
            return;
        }
    }

    cout << b[0] << " " << b[1] << "\n";
}

int main()
{
    fastio;
    ll t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}