#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a >= b)
    {
        ll res = (a + c) - b;
        cout << res << '\n';
    }
    else
    {
        ll tmp1 = b - a;
        ll tmp2 = (b - (a + c));
        tmp2 =abs(tmp2);
        

        ll res = max(tmp1, tmp2);
        cout << res << '\n';
    }

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}