#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll a;
    ll b;
    cin >> a >> b;

    ll big = max(a, b);
    ll small = min(a, b);
    if (big > small * 2)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        ll total = small + big;
        if (total % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}