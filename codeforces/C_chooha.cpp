#include <bits/stdc++.h>
using namespace std;


// 6
// 1 2 2 1 1
// 3
// 5 3 1
void solve(){
    // idx accounts for the node number n+1
    // pair.first  = sz
    // pair.second = vector<int>,nodes to which it is actually paired to 
    int n,dams_cnt;
    cin >> n >> dams_cnt;
    vector<pair<int,vector<int>>> pr(n+1); // initiate it to zero the freq : arr of idices
    for(int i = 2;i<=n-1;i++){
        // num is the parent of idx 
        int num;
        cin >> num;
        pr[num].second.push_back(i);
        pr[num].first = pr[num].second.size();
        pr[i].second.push_back(num);
        pr[i].first = pr[i].second.size();
    }

    sort(pr.begin(),pr.end());
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}