#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll t)
{
    ll sum = (t*(t+1))/2;
    for (ll i = 0; i < t - 1; i++)
    {
        ll temp = 0;
        cin >> temp;
        sum = sum - temp;
    }
    cout << sum << "\n";
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