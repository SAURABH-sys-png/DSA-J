#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    char ch;
    cin >> n >> ch;

    string s;
    cin >> s;

    int res = 0;
    for(int i = 0;i<n/2;i++){
        if(s[i]==s[n-i-1]) continue;
        else if(s[i]!=ch && s[n-i-1]!=ch) res+=2;
        else{
            res++;
        }
    }
    cout << res << '\n';
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