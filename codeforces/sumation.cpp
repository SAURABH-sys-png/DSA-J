#include <bits/stdc++.h>

using namespace std;

// (xy*k) + (x+y)(k(k+1)/2) + (k*(k+1)*(2*k + 1))/6
#define ll long long

void solve(){
	ll x,y,k;
	cin >> x >> y >> k;
	ll res = 0;


	res = (x*y*k) + ((x+y)*(k*(k+1)))/2 + (k*(k+1)*(2*k + 1))/6;
	cout << res << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}