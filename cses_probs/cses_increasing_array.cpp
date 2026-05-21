#include <bits/stdc++.h>
#define ll long long

using namespace std;



void solve() {
    ll n;
    cin >> n;
    vector<ll> res;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        res.push_back(x);
    }
    ll count = 0;
    for (ll i = 0; i < n-1; i++)
    {
        if (res[i] > res[i + 1])
        {
            count = count + res[i] - res[i + 1];
            res[i + 1] = res[i];

        }

    }
    cout << count << endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    
    solve();

    return 0;
}