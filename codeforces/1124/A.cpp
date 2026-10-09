#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve(){
  // a solution
  int xi,yi,r;
  cin >> xi >> yi >> r;

  int lower_xi = xi - r;
  int upper_xi = xi + r;
  int lower_yi = yi - r;
  int upper_yi = yi + r;
  

  int ans_x = xi;
  int ans_y = yi;
  int randsq = r*r;

  int mini = INT_MAX;
  for(int i = lower_xi;i < upper_xi;i++){
    for(int j = lower_yi;j < upper_yi;j++){
      int distsq = (j-yi)*(j-yi) + (i-xi)*(i-xi);
      if(distsq > randsq) continue;
      if(distsq==randsq) {
        ans_x = i;ans_y = j;
        cout << ans_x << ' ' << ans_y << '\n';
        return;
      }
      else{
        if(distsq>mini){
          ans_x = i;ans_y = j;
          mini = distsq;
          continue;
        }
      }
    }
  }

  cout << ans_x << ' ' << ans_y << '\n';
  return;
}

int main(){
  fastio
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
