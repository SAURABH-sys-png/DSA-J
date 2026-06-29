#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // balancing the odd positions

    ll sum_odd = 0;
    ll sum_even = 0;
    ll ecnt = 0;
    ll ocnt = 0;

    for (ll i = 0; i < n; i += 2)
    {
        sum_odd += nums[i];
        ocnt++;
    }
    for (ll i = 1; i < n; i += 2)
    {
        sum_even += nums[i];
        ecnt++;
    }

    double nums1 = (double)sum_even /ecnt;
    double nums2 = (double)sum_odd / ocnt;

    if ((nums1 == nums2) && (floor(nums1) == nums1) && (floor(nums2) == nums2))
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
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