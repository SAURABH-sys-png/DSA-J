#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    multiset<ll> number_tickets;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        number_tickets.insert(num);
    }

    for (ll j = 0; j < m; j++)
    {
        ll num1;
        cin >> num1;

        auto it = number_tickets.upper_bound(num1);

        if (it == number_tickets.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            it--;
            cout << *it << "\n";
            number_tickets.erase(it);
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    solve();

    return 0;
}