#include <bits/stdc++.h>
using namespace std;



void solve(){
	int n,m;
	cin >> n >> m;
	vector<int> arr(n);
	unordered_map<int,int> mp;

	for(int i = 0;i<n;i++){
		int x;
		cin >> x;
		arr[i] = x;
		mp[x] = i;
	}


	for(int i = 0;i< m;i++){
		int q;
		cin >> q;
		int csz = arr.size();
		arr[mp[q]] = -1;
		arr.push_back(q);
		mp[q] = csz;
	}
	vector<int> res;
	for(int i = 0;i< arr.size();i++){
		if(arr[i] == -1) continue;
		res.push_back(arr[i]);
	}

	for(auto&x : res){
		cout << x << ' ';
	}
	return;
}
int main(){
	solve();
	return 0;
}