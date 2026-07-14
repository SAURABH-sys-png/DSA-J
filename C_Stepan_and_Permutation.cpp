#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve()
{
    int n;
    ll x, y;
    cin >> n >> x >> y;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i];
    }

    ll g = gcd(x, y);

    for (int i = 1; i <= n; ++i)
    {
        if (i % g != p[i] % g)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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