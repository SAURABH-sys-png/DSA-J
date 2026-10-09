#include <bits/stdc++.h>
using namespace std;
#define MOD 1e9+7
#define ll  long long
ll f(int x) {
    ll s = 0;
    while (x > 0) { ll d = x % 10; s += d * d; x /= 10; }
    return s;
}


ll key(ll x){
  if(x==0)return 0;
  while(x!=1 && x!=4)x = f(x);
  return x;
}



bool check(ll a,ll b){
  for(int i  =0;i<100;i++){
    if(a==b)return 1;
    a = f(a);
    b = f(b);
  }

  return 0;

}
void solve(){
  int n;
  cin >> n;
  vector<ll> arr(n);

  vector<int> parity(n);
  for(int i  =0;i<n;i++){
    int x;
    cin >>x;
    arr[i] = x;
    parity[i] = key(x);
  }

  ll cnt =0;
  for(int i = 0;i<n-1;i++){
    for(int j = i+1;j<n;j++){
      if(parity[i] == parity[j] && parity[i] == 1){
        cnt++;
      }
      else if(parity[i] == parity[j]){
        if(check(arr[i],arr[j]))cnt++;
      }
    }
  }

  cout << cnt << '\n';


}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
