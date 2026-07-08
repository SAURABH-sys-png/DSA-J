#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;



void solve() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int mini = min(arr[i],arr[i+1]);
        arr[i]-=mini;
        arr[i+1] -=mini;
        if (arr[i+1] < arr[i])
        {
            cout<<"NO"<<'\n';
            return;
        }
        
    }

    cout<<"YES"<<'\n';
    
    
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}