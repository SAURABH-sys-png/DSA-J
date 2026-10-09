#include <bits/stdc++.h>
using namespace std;



void solve(){
  int n,k;
  cin >> n >> k;
  long long sm =0;
  int st = n-k+1;
  if(st>0){
    sm+=pow(2,st);
  }
  k--;
  sm+=(k*2);
  cout << sm << '\n';
  return;
}
int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
