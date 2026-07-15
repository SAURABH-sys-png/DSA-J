#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    
    long long sum = 0;
    int prev_idx = 0;
    for (int i = 0; i < m; ++i) {
        long long interval_sum = 0;
        for (int j = prev_idx + 1; j <= b[i]; ++j) {
            interval_sum += a[j];
        }
        sum += abs(interval_sum);
        prev_idx = b[i];
    }
    for (int j = prev_idx + 1; j <= n; ++j) {
        sum += a[j];
    }
    
    cout << sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}