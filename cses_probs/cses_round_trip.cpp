#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n,m;
    cin >> n >> m;


    
   

    for(int i = 0;i<m;i++){
        int a,b;
        cin >> a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i= 1;i<n;i++){
        if(vis[i]) continue;
        set<int> st;
        vector<bool> seen(n+1,false);






    }

}
int main(){
    
    solve();    
}