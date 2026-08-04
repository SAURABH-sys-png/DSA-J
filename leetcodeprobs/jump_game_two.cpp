#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int jump(vector<int>& nums) {
	int n = nums.size();
	int idx = 0;
	int jumps = 0;
	while(idx < n-1){
		int temp = nums[idx];
		int rng = 0;
		int idx_maxi = idx;
		for(int i = 1;i<=temp;i++){
			//2,3,1,1,4,9,4,5,1,2,3,0,1
			if(nums[idx+i]+i > rng){
				rng  =nums[idx+i] + i;
				idx_maxi = idx+i;
			}
		}
		idx = idx_maxi;//1
		jumps++;//1
	}
	return jumps;
    }
};
int main(){

}
