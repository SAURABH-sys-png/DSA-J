#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> pr(n);

    // Frequency of singleton intervals
    vector<int> freq(2 * n + 2, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> pr[i].first >> pr[i].second;

        if (pr[i].first == pr[i].second)
            freq[pr[i].first]++;
    }

    // present[x] = 1 if x appears as a singleton at least once
    vector<int> pref(2 * n + 2, 0);

    for (int i = 1; i <= 2 * n; i++)
    {
        pref[i] = pref[i - 1] + (freq[i] > 0);
    }

    string ans;

    for (int i = 0; i < n; i++)
    {
        int l = pr[i].first;
        int r = pr[i].second;

        if (l == r)
        {
            // Singleton interval
            if (freq[l] == 1)
                ans += '1';
            else
                ans += '0';
        }
        else
        {
            int occupied = pref[r] - pref[l - 1];
            int len = r - l + 1;

            if (occupied == len)
                ans += '0';
            else
                ans += '1';
        }
    }

    cout << ans << '\n';
}

int main()
{
    fastio;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}