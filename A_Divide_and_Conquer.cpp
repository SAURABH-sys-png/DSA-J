#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;



void solve() {
    int x,y;

    cin >> x >> y;

    if (x%y == 0)
    {
        cout << "YES" << endl;

    }
    else{
        cout << "NO" << endl;
    }
    
    
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}