#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin >> n;
	n++;
	n = n%3;
	if(n==0){
		cout << '1' << '\n';
		return;
	}
	cout << n << '\n';
}
int main(){

	solve();
	return 0;
}