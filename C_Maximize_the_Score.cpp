#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
    	int n = nums.size();
  		int ptr1 = 0;
  		int ptr2 = n/2;     

  		int sum_f = 0;
  		int sum_s = 0;

  		for(int i =0;i<n;i++){
  			if(i<n/2){
  				sum_f+=nums[i];
  			}
  			else{
  				sum_s+=nums[i];
  			}
  		} 

  		int cnt = 0;
  		while(ptr1<n/2){
  			int num1 = nums[ptr1];
  			int num2 = nums[ptr2];

  			sum_f=sum_f - num1 + num2;
  			sum_s = sum_s - num2 + num1;
  			ptr1++;
  			ptr2++;
  			if(sum_f > sum_s){
  				cnt++;
  			}
  		}
  		return cnt;
    }
};

int main(){
	return 0;
}