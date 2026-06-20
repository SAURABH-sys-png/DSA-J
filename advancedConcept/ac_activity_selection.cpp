#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

int main()
{
    fastio;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr.begin(), arr.end());
    ll count = 1;
    ll end = arr[0].first;
    for (ll i = 1; i < n; i++)
    {
        if (!(end > arr[i].second))
        {
            count++;
            end = arr[i].first;
        }
    }

    cout << count << "\n";

    return 0;
}