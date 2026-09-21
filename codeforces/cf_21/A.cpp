#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    int mini = min({a1,a2,a3});
    cout << (n-mini) << '\n';
    return;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}