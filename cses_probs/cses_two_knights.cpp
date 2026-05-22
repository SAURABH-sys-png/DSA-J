#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll nth_term(ll n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        ll num = nth_term(n - 1) + 8 * (n - 2);
        return num;
    }
}
void solve(ll t)
{
    ll all_possible_boxes = t * t;
    ll total_no_of_ways = (all_possible_boxes * (all_possible_boxes - 1)) / 2;
    ll res = total_no_of_ways - nth_term(t);
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}