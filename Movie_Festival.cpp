#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> pr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pr[i].first >> pr[i].second;

    }
    sort(pr.begin(),pr.end());
    
    
    
    

    return 0;
}