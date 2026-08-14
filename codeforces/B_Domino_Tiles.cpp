#include <bits/stdc++.h>

using namespace std;
#define ztn(i, n) for (int i = 0; i < n; i++)
const int MOD = 998244353;
void solve()
{
    int n;
    string s;
    cin >> n >> s;

    long long odd = 0, even = 0;

    for (int x = 0; x < 2; x++)
    {
        bool ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != '?' && s[i] - '0' != (x ^ (i / 2 & 1)))
                ok = false;
        }
        odd += ok;
    }

    for (int x = 0; x < 2; x++)
    {
        bool ok = true;
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != '?' && s[i] - '0' != (x ^ ((i - 1) / 2 & 1)))
                ok = false;
        }
        even += ok;
    }

    cout << odd * even % MOD << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}