#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<string> mat(n);

    ll centerRow = -1;
    ll centerCol = -1;
    ll maxCnt = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> mat[i];

        ll cnt = 0;
        for (char c : mat[i])
        {
            if (c == '#')
                cnt++;
        }

        if (cnt > maxCnt)
        {
            maxCnt = cnt;
            centerRow = i;

            vector<ll> cols;
            for (ll j = 0; j < m; j++)
            {
                if (mat[i][j] == '#')
                    cols.push_back(j);
            }

            centerCol = cols[cols.size() / 2];
        }
    }

    cout << centerRow + 1 << " " << centerCol + 1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}