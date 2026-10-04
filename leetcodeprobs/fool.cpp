#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int minRotations(string s) {
  	int n = s.size();
	

	int prev= 0;
	
	int res =0;
	for(int i = 0;i<n;i++){
		int num = s[i]-'0';
		int ab = abs(num-prev);
		int rot = abs(9-prev+num);
		res+=min(ab,rot);
		prev=num;
	}
	return res;

    }
};

int main(){
	
}

