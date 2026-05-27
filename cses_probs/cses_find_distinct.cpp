#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll t)
{
    set<long long> arr;
    for (ll i = 0; i < t; i++)
    {
        ll num = 1;
        cin >> num;
        arr.insert(num);
    }

    cout << arr.size() << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    
    solve(t);

    return 0;
}