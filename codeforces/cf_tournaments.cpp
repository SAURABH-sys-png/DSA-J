#include <bits/stdc++.h>

using namespace std;



void solve() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int lg = -1;
    for (int i = 0; i < n; i++)
    {
        lg = max(lg,arr[i]);
    }
    int jth_num = arr[j-1];

    if(jth_num == lg){
        cout << "YES" << endl;
        return;
    }
    else{
        if(k == 1){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
    }
    
    
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