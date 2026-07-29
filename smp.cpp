#include <iostream>
#include <vector>
using namespace std;

int bada(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

// O(n) is the bottlenek
// small o is the llower bound



int maximumEle(vector<int> nums){
	int sabse_bada = 0;
	for(int i = 0;i<nums.size();i++){
		sabse_bada = bada(nums[i],sabse_bada);
	}
	return sabse_bada;
}
int main(){
	vector<int> nums = {2,3,4,5,6,7};
	int result =maximumEle(nums);
	cout << result << endl;

}
