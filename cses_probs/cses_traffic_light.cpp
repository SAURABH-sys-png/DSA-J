#include <bits/stdc++.h>
#define ll long long
using namespace std;

// street lenght given as x
// input as x, n
// posi

void solve(ll x, ll n)
{
    set<ll> posi;
    multiset<ll> len;

    posi.insert(0);
    posi.insert(x);
    len.insert(x);

    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;

        auto it = posi.upper_bound(num);
        ll right = *it;
        ll left = *prev(it);

        len.erase(len.find(right-left));
        len.insert(num - left);
        len.insert(right - num);

        posi.insert(num);
        cout << *len.rbegin() << "\n";

    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll x, n;
    cin >> x >> n;
    solve(x, n);

    return 0;
}