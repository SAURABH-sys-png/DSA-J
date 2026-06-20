#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll cost;
    ll y;
    ll x;

    if (n == 1 || n == 2)
    {
        if (n == 1)
        {
            cost = min(a, b);
        }
        else
        {
            cost = min(2 * a, b);
        }
        cout << cost << "\n";
        return;
    }

    if (3 * a <= b)
    {
        x = n;
        y = 0;
    }
    else
    {
        ll rem = n % 3;
        if (rem == 0)
        {
            x = 0;
            y = n / 3;
        }
        else if (rem == 1)
        {
            if (a < b)
            {
                x = 1;
                y = n / 3;
            }
            else
            {
                x = 0;
                y = n / 3 + 1;
            }
        }
        else
        {
            if (2 * a < b)
            {
                x = 2;
                y = n / 3;
            }
            else
            {
                x = 0;
                y = n / 3 + 1;
            }
        }
    }

    cost = x * a + y * b;
    cout << cost << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}