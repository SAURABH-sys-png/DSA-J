#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll ans = LLONG_MAX;

    for (int i = n - 1; i >= 0; i--)
    {
        ll temp = x;
        ll temp_ans = 0;

        for (int j = i; j >= 0; j--)
        {
            ll num = arr[j];
            if (temp < num)
            {
                continue;
            }
            temp_ans += temp / num;
            temp = temp % num;

            if (temp == 0)
            {
                break;
            }
        }
        if (temp == 0)
        {
            ans = min(ans,temp_ans);
        }
        
    }

    cout << ans << '\n';
}

int main()
{
    solve();

    return 0;
}