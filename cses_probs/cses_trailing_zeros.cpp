#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll t)
{
    ll ans = 0;
    while (t >= 5)
    {
        ans += t / 5;
        t /= 5;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    solve(t);

    return 0;
}