#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
	int n = nums.size();

	
	if(rem<=8){
		return n;
	}
	else if(n>8 && n<= 16){
		int rm = n-8;
		return (8+(rm*2));
	}
	else if(n>16&&n<=24){
		int rm = n-16;
		return (24+(rm*3));
	}
	else{
		int rm = n-224;
		return (48 + (rm*4));
	}
    }
};

int main(){
return 0;
}

