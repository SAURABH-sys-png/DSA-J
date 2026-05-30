#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll max_sum = LLONG_MIN;
    ll temp = 0;

    for (ll i = 0; i < n; i++)
    {
        temp += arr[i];

        if (temp > max_sum)
        {
            max_sum = temp;
        }
        if (temp < 0)
        {
            temp = 0;
        }
    }
    cout << max_sum << "\n";
}

int main()
{
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    solve();

    return 0;
}