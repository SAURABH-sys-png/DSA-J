#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);



void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  stack<int> stk;

  int cnt =0;
  

  vector<bool> printed(n+1,false);
  for(int i=1;i<=n;i++){
    char ch = s[i-1];
    if(ch=='1'){
      stk.push(i);
    }
    else if(ch=='2'){
      if(stk.empty()){
        printed[i] = 1;
        cnt++;
        continue;
      }
      int num = stk.top();stk.pop();

      printed[num] = 1;cnt++;
      continue;
    }
    else if(ch=='3'){
      printed[i] = 1;cnt++;
    }
  }
  

  cout << n-cnt << '\n';
  for(int i = 1;i<=n;i++){
    if(!printed[i]) cout << i << ' ';
  }
  cout << '\n';

  return;
}


int main(){
  fastio
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
