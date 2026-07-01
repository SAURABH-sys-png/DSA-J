#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> pr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pr[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i].second;
    }

    ll diff = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        pr[i].first += diff;
        if (pr[i].first > pr[i].second)
        {
            diff = pr[i].first - pr[i].second;
            continue;
        }
        else
        {
            diff = 0;
        }
    }

    if (diff > 0)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
    }
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