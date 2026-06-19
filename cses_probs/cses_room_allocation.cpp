#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<tuple<ll, ll, ll>> customers;

    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        customers.push_back({a, b, i});
    }

    sort(customers.begin(), customers.end());

    priority_queue<
        pair<ll, ll>,
        vector<pair<ll, ll>>,
        greater<pair<ll, ll>>>
        pq;

    vector<ll> ans(n);

    ll rooms = 0;

    for (auto &[arrival, departure, idx] : customers)
    {
        if (!pq.empty() && pq.top().first < arrival)
        {
            auto [end_day, room_no] = pq.top();
            pq.pop();

            ans[idx] = room_no;
            pq.push({departure, room_no});
        }
        else
        {
            rooms++;
            ans[idx] = rooms;
            pq.push({departure, rooms});
        }
    }

    cout << rooms << "\n";

    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << "\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}