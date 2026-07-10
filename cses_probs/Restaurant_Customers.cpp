#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> events;

    while (n--)
    {
        int ft, sd;
        cin >> ft >> sd;

        events.push_back({ft, +1});
        events.push_back({sd, -1});
    }

    sort(events.begin(), events.end());

    int curr = 0, ans = 0;

    for (auto &e : events)
    {
        curr += e.second;
        ans = max(ans, curr);
    }

    // o(nlogn)

    // (2,4),(3,9),(5,8)

        cout << ans << '\n';
}

int main()
{
    fastio
    solve();

    return 0;
}