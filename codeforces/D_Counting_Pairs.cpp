#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;
using namespace __gnu_pbds;

typedef tree<
    pair<ll, ll>,
    null_type,
    less<pair<ll, ll>>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n);

    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    ordered_set ost;
    ll ans = 0;

    for (ll i = n - 1; i >= 0; i--)
    {
        ll curr = sum - arr[i];
        ll up_bnd = max(0LL, curr - x);
        ll low_bnd = max(0LL, curr - y);

        ans += ost.order_of_key({up_bnd + 1, -1}) -
               ost.order_of_key({low_bnd, -1});

        ost.insert({arr[i], i});
    }

    cout << ans << endl;
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