#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<ll> count1(k, 0);

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count1[i % k]++;
        }
    }

    bool possible = true;
    for (ll i = 0; i < k; i++)
    {
        if (count1[i] % 2 != 0)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}

int main()
{
    fastio;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}