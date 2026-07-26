#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define ld long double

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NO" << '\n';
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
        }
        return;
    }

    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            int k;
            cin >> k;
            even.push_back(k);
        }
        else
        {
            int k;
            cin >> k;
            odd.push_back(k);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int eB = odd[odd.size() - 1];
    int oS = even[0];
    if (abs(eB - oS) > 1)
    {
        cout << "YES" << '\n';
        return;
    }
    else
    {
        cout << "NO" << '\n';
        return;
    }
}

int main()
{
    fastio int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}