#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> pr;

void sieve(int lim) {
    vector<bool> f(lim + 1, true);
    f[0] = f[1] = false;
    for (int i = 2; i * i <= lim; i++) {
        if (f[i]) {
            for (int j = i * i; j <= lim; j += i)
                f[j] = false;
        }
    }
    for (int i = 2; i <= lim; i++) {
        if (f[i]) pr.push_back(i);
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << pr[i] * pr[i + 1] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(200000);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}