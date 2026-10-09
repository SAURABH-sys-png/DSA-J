#include <bits/stdc++.h>
using namespace std;


void solve(){
  int n,p;
  cin >> n >> p;


  vector<int> arr(n+1);
  for(int i  =1;i<=n;i++){
    int x;
    cin >> x;
    arr[i] = x;
  }


  int sz = n;

  // 1,2,6,7,8,2,10
  // 3
  //
  int itr1 = p;
  int itr2 = sz-p+1;
  int sum  =0;
  while(sz>=p){
    int num1 = arr[itr1];
    int num2 = arr[itr2];
    if(num1>=num2){
      itr1++;
      itr2--;
      sum+=num1;
    }
    else{
      itr2--;
      sum+=num2;
    }
    sz--;
  }

  cout << sum << '\n';

}

int main(){
  int t;
  cin >>t;
  while (t--) {
    solve();
  }
}
