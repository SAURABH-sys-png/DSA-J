#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &u : a)
    {
        cin >> u;
    }
    vector<int> prms;
    int temp_x = x;
    for (int i = 2; i * i <= temp_x; i++)
    {
        if (temp_x % i == 0)
        {
            prms.push_back(i);
            while (temp_x % i == 0)
            {
                temp_x /= i;
            }
        }
    }
    if (temp_x > 1)
    {
        prms.push_back(temp_x);
    }

    long long res = 0;
    for (auto p : prms)
    {
        long long current_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % p == 0)
            {
                current_sum += a[i];
            }
        }
        res = max(res, current_sum);
    }

    cout << res << '\n';

    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}