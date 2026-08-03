#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canJump(vector<int>& nums) {
	int n = nums.size();

	int maxi = 0;
	
	// 3,2,1,0,4
	for(int i = 0;i<n;i++){
		int curr = nums[i];
		if(curr+i >= n-1){
			return true;
		}
		maxi = max(maxi,curr+i);
		if(i >= maxi) {
			return true;
		}
	}
	return true;


    }
};
