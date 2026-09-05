#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n,k;
	cin >> n >> k;
	string bst = "";
	cin >> bst;


	int res = 0;
	int idx = 0;
	int tmp = k;
	int grps = n/k;
	for(int i = 0;i <grps ;i++){
		bool flag = false;
		for(int l = 0;l<k;l++){
			if(bst[idx] == '0'){
				flag = true;
			}
			idx++;
		}
		if(!flag){
			res++;
		}
	}
	cout << res << '\n';
}

int main(){

	int t ;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}