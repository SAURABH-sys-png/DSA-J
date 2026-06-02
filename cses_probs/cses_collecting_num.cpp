#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n)
{
    set<ll> mp;
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        if (!(mp.find(num - 1) != mp.end()))
        {
            res++;
            mp.insert(num);
        }
        else
        {
            mp.insert(num);
        }
    }

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll n;
    cin >> n;
    solve(n);
    return 0;
}