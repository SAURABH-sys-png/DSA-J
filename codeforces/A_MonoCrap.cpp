#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >>n;
	vector<int> arr(n);
	int easy = 0;
	int hd = 0;

	for(auto&x : arr){
		cin >> x;
		if(x==1) hd++;
		if(x==0) easy++;
	}

	int st = arr[0];
	int end = arr[n-1];
	if(easy < 2){
		cout << -1 << '\n';
		return;
	}
	else if(st==0 && end ==0){
		cout << 0 << '\n';
		return;

	}
	else if(st!=0 && end!=0){
		cout << 2 << '\n';
		return;
	}
	else {
		cout << 1 << '\n';
		return;
	}
}

int main(){

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}