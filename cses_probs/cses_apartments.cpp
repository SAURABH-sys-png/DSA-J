#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll res = 0;
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> desired_ap(n);
    vector<ll> free_ap(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> desired_ap[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> free_ap[i];
    }

    sort(desired_ap.begin(), desired_ap.end());
    sort(free_ap.begin(), free_ap.end());

    ll ptr1 = 0;
    ll ptr2 = 0;

    while (ptr1 < n && ptr2 < m)
    {
        if ((free_ap[ptr2] >= (desired_ap[ptr1] - k)) && (free_ap[ptr2] <= (desired_ap[ptr1] + k)))
        {
            res++;
            ptr2++;
            ptr1++;
        }
        else if (free_ap[ptr2] < (desired_ap[ptr1] - k))
        {
            ptr2++;
        }
        else
        {
            ptr1++;
        }
    }

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}