#include <bits/stdc++.h>
using namespace std;


#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);



void solve(){
  int n;
  cin >> n;
  vector<long long> arr(n);
  for(auto& x : arr) cin >> x;

  map<long long, vector<int>> mp;
  for(int i = 0; i + 4 < n; i++){
    long long sum = arr[i] + arr[i+2] - arr[i+4];
    mp[sum].push_back(i);
  }

  long long ans = 0;
  for(auto& [sum, idx] : mp){
    long long k = idx.size();
    long long total = k * (k - 1) / 2;
    long long bad = 0;
    for(int i : idx){
      if(binary_search(idx.begin(), idx.end(), i + 2)) bad++;
      if(binary_search(idx.begin(), idx.end(), i + 4)) bad++;
    }
    ans += total - bad;
  }
  cout << ans << '\n';
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
