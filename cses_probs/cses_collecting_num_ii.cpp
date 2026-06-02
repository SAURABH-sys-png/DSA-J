#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n, ll m)
{
    vector<ll> arr(n + 1);
    vector<ll> pos(n + 2);

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    ll res = 1;
    for (ll i = 1; i < n; i++)
    {
        if (pos[i] > pos[i + 1])
        {
            res++;
        }
    }

    while (m--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << res << "\n";
            continue;
        }

        ll valA = arr[a];
        ll valB = arr[b];

        set<pair<ll, ll>> affected_pairs;
        if (valA > 1)
            affected_pairs.insert({valA - 1, valA});
        if (valA < n)
            affected_pairs.insert({valA, valA + 1});
        if (valB > 1)
            affected_pairs.insert({valB - 1, valB});
        if (valB < n)
            affected_pairs.insert({valB, valB + 1});

        for (auto p : affected_pairs)
        {
            if (pos[p.first] > pos[p.second])
            {
                res--;
            }
        }

        swap(arr[a], arr[b]);
        swap(pos[valA], pos[valB]);

        for (auto p : affected_pairs)
        {
            if (pos[p.first] > pos[p.second])
            {
                res++;
            }
        }

        cout << res << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;

    solve(n, m);

    return 0;
}