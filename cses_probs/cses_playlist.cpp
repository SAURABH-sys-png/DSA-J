#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n)
{
    map<ll, ll> mp;
    ll maxi = 0;
    ll ptr1 = 0;

    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        if (mp.find(num) != mp.end())
        {

            if (mp[num] >= ptr1)
            {
                ptr1 = mp[num] + 1;
            }
        }
        mp[num] = i;
        ll current_window = i - ptr1 + 1;
        maxi = max(maxi, current_window);
    }

    cout << maxi << "\n";
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