#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll t)
{
    ll sum = (t * (t + 1)) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES" << "\n";
        ll half = sum / 2;
        vector<ll> a;
        vector<ll> b;
        for (ll i = t; i >= 1; i--)
        {
            if (sum - i >= half)
            {
                a.push_back(i);
                sum = sum - i;
            }
            else
            {
                b.push_back(i);
            }
            // cout << "Done";
        }
        cout << a.size() << endl;
        for (ll i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";

        cout << b.size() << endl;

        for (ll j = 0; j < b.size(); j++)
        {
            cout << b[j] << " ";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    solve(t);
    cout << "\n";

    return 0;
}