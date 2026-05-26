#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        if(nums.size() == 1)return 1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> result;

        for(int i = 0;i<n-1;i++){
            if(nums[i] != nums[i+1]){
                result.push_back(nums[i]);
            }

        }
        result.push_back(nums[n-1]);
        int maxcount = 0;
        int currentcount = 0;
        int res = 0;

        for(int k = 0;k<result.size()-1;k++){
            if((result[k+1]-result[k] )== 1){
                currentcount++;
            }
            else if((result[k+1]-result[k]) != 1){
                currentcount++;
                maxcount = max(maxcount,currentcount);
                currentcount = 0;
            }
        }

        currentcount++;
        res = max(maxcount,currentcount);
        

        return res;
    }
};

int main(){

}