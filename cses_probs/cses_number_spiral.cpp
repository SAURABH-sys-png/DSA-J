#include <bits/stdc++.h>

using namespace std;

 

void solve() {
    long long y,x;
    cin >> x >> y;
    long long n = max(x,y);
    long long ans = 0;

    if(n % 2 == 0){
        if(x == n){
            ans = (long long)n * n - y + 1;
        }
        else{
            ans = (long long)(n-1) * (n-1) + x;
        }
    }
    else{
        if(y == n){
            ans = (long long)n * n - x + 1;
        }
        else{
            ans = (long long)(n-1) * (n-1) + y;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}