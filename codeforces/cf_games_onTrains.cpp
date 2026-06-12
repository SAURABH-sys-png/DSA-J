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
    int maxi = 0;
    int mini = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        maxi = max(maxi, num);
        mini = min(mini, num);
    }

    int k = maxi - mini + 1;
    cout << k << '\n';
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