#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    vector<pair<int, int>> sa(n), sb(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sa[i] = {a[i], i};
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sb[i] = {b[i], i};
    }

    const int INF = 1e9;

    int cost1 = 0;
    bool ok1 = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            ok1 = false;
            break;
        }
        cost1 += (a[i] - b[i]);
    }

    int cost2 = 0;
    bool ok2 = true;

    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());

    for (int i = 0; i < n; i++)
    {
        if (sa[i].first < sb[i].first)
        {
            ok2 = false;
            break;
        }
        cost2 += (sa[i].first - sb[i].first);
    }

    if (ok2)
        cost2 += c;

    if (!ok1)
        cost1 = INF;
    if (!ok2)
        cost2 = INF;

    int ans = min(cost1, cost2);

    if (ans == INF)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
