#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min_total_calls = 1e9;

    for (int i = 0; i < n; i++)
    {
        ll target = a[i];
        int L = 0;
        int R = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] < target)
            {
                L++;
            }
            else if (a[j] > target)
            {
                R++;
            }
        }

        int current_calls = max(L, R);
        min_total_calls = min(min_total_calls, current_calls);
    }

    cout << min_total_calls << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}