#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int one = 0, even = 0, odd = 0;
    while (n--) {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 1) 
            one++;
        else if ((tmp / 2) & 1) 
            odd++;
        else 
            even++;
    }
    cout << max({one, even, odd}) << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}