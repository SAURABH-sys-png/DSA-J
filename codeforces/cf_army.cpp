#include <bits/stdc++.h>

using namespace std;



void solve() {
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n-1; i++)
    {
        int a;
        cin >> a;
        ans.push_back(a);
    }
    int a,b;
    cin >> a >> b;
    int res = 0;
    for (int i = a-1; i < b-1; i++)
    {
        res += ans[i];
    }
    cout << res << endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    solve();

    return 0;
}