#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    vector<bool> f(n + 1, false);
    int true_count = 0;
    bool possible = false;

    for (int v = n; v >= 1; --v)
    {
        if (cnt[v] > 0)
        {
            if (true_count > 0)
            {
                f[v] = false;
            }
            else
            {
                f[v] = (cnt[v] % 2 != 0);
            }
        }
        else
        {
            f[v] = false;
        }

        if (cnt[v] > 0 && !f[v])
        {
            possible = true;
        }

        if (f[v])
        {
            true_count++;
        }
        if (v + k <= n && f[v + k])
        {
            true_count--;
        }
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}