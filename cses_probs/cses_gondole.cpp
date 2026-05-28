#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n, ll x)
{
    ll res = 0;
    vector<ll> weights;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        weights.push_back(num);
    }
    sort(weights.begin(), weights.end());

    ll st = 0;
    ll end = weights.size() - 1;

    while (st <= end)
    {
        ll sum = weights[st] + weights[end];
        if (st == end)
        {
            sum = sum / 2;
            if (sum <= x)
            {
                res++;
                end--;
            }

            end--;
        }
        else if (sum > x)
        {
            res++;
            end--;
        }
        else
        {
            res++;
            st++;
            end--;
        }
    }

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll n, x;
    cin >> n >> x;

    solve(n, x);

    return 0;
}