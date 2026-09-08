#include <bit/stdc++.h>
using nsamespace std;

class Solution {
public:
	int cnt(string &s){
		int res = 0;
		for(int i = 0;i< s.size()-1;i++){
			if(s[i] == s[i+1]){
				res++;
			}
		}
		return res;
	}
	void rot(string &s){
		char ft = s[0];
		s+=ft;
		s = s.substr(1);
	}
    int countRotations(string s, int k) {
    	int res = 0;
  		for(int i = 0;<k;i++){
  			if(cnt(s)==k){
  				res++;
  			}
  			rot(s);
  		}
  		return res;
    }
};

int main(){
	return 0;
}