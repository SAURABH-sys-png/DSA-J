#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        sum += x;
    }

    if(sum&1){
        cout << "Yes" << '\n';
        return;
    }
    else {
        // shaunak is not winning 
        if((n*k)&1){
            cout << "No" << '\n';
            return;
        }
        cout << "Yes" << '\n';
        return;
    }
    return;
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }   
}