#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n)
{
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    ll median_ind;
    if (n % 2 == 0)
    {
        median_ind = n / 2;
    }
    else
    {
        median_ind = (n + 1) / 2;
    }
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        res += abs(arr[i] - arr[median_ind - 1]);
    }

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll n;
    cin >> n;

    solve(n);

    return 0;
}