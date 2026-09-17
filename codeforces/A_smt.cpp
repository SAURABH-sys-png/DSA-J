#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >>n;
    int one  = 0;
    int tw = 0;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        (x&1) ? one++ : tw++;
    }

    if(one>=tw){
        cout << "Bessie" << '\n';
    }
    else{
        cout << "Elsie" << '\n';
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}