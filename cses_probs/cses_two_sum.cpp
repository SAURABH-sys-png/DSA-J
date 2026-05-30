#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<pair<ll, ll>> seen(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> seen[i].first;
        seen[i].second = i + 1;
    }

    sort(seen.begin(), seen.end());

    ll st = 0;
    ll end = n - 1;

    while (st < end)
    {
        ll current_sum = seen[st].first + seen[end].first;

        if (current_sum == x)
        {

            cout << seen[st].second << " " << seen[end].second << "\n";
            return;
        }
        else if (current_sum > x)
        {
            end--;
        }
        else
        {
            st++;
        }
    }

    cout << "IMPOSSIBLE" << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}