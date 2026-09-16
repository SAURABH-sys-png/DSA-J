#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;

	unordered_set<char> abr;

	for(int i= 0;i< n;i++){
		string tmp = "";
		cin >> tmp;
		char ch = tmp[0];
		abr.insert(toupper(ch));
	}
	bool flag = true;
	for(int i = 0;i<m;i++){
		string tmp = "";
		cin >> tmp;

		for(auto&ch : tmp){
			if(abr.count(ch)){
				continue;
			}
			else{
				flag = false;
			}
		}
	}
	
	if(flag){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}
	return;
}


int main(){
	int t;
	cin >>t;
	while(t--){
		solve();
	}
	return 0;
}