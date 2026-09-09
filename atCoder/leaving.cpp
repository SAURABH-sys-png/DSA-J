#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin >> n;
	
	vector<int> arr(n);

	for(auto& x : arr){
		cin >> x;
	}
	// 1 2 3 4 5 6 7 8 9 10 12 11
	
	int it = n/10;  // 1
	
	int cnt = 0;
	int i =0;
	for(int mu = 1;mu<=it ;mu++){ // single iteration
		for(int k = 0;k < 10 ;k++){ // 10 iterations
			if(arr[i]<=mu*10){ // 
				cnt++;
			}
			i++; //
		}
		if(cnt!=10){
			cout << "NO" << '\n';
			return;
		}
		else{
			cnt = 0;
		}
	}


	cout << "YES" << '\n';
}
int main(){
	solve();
	return 0;
}