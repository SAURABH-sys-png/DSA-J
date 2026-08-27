#include <bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  cin >> n;
  int tsum = 0;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    tsum+=arr[i];
  }

  // partition 

  int lft = arr[0];
  int rht = tsum-lft;
  int ans= INT_MAX;
  for (int i = 1; i < n; i++) {
    int tmp = abs(rht-lft);
    ans = min(ans,tmp);
    lft += arr[i];
    rht -=arr[i];
  }

  std::cout << ans;


}

int main(){

  solve();
  return 0;
}
