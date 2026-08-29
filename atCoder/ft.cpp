#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
   int n;
   cin >> n;
   int res = 0;

   int st = n/2;

   for(int i = 0;i< n;i++){
     int tmp;
     cin >> tmp;
     if(i>=st){
       res+=tmp;
     }
   }

   cout << res << '\n';
}

int main(){
  fastio;
  solve();
  return 0;
}
