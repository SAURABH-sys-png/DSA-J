#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long ans = 1;
    long long MOD = 1e9 + 7;

    for (int i = 0; i < n; i++)
    {
        ans = (ans * 2) % MOD;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    solve();

    return 0;
}