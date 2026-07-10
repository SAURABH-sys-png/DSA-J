#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> pr(n);

    for (int i = 0; i < n; i++)
    {
        int second, first;
        cin >> second >> first;
        pr[i].first = first;
        pr[i].second = second;
    }

    sort(pr.begin(), pr.end());
    int ans = 1;

    int st = pr[0].second;
    int end = pr[0].first;
    for (int i = 1; i < n; i++)
    {
        if (pr[i].second >= end)
        {
            ans++;
            end = pr[i].first;
        }
    }
    cout << ans << '\n';

    return 0;
}