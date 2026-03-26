#include <iostream>
#include <vector>


using namespace std; 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //step 1 sort the array
        sort(nums.begin(),nums.end());

        vector<vector<int>> result;


// if(k > j+1 && nums[k] == nums[k-1]) continue;
//                 if(nums[i]+nums[j]+nums[k] == 0){
//                     result.push_back({nums[i],nums[j],nums[k]});
//                 }
        //step 2 declaring two pointer to front and

        for(int i = 0; i < nums.size() ; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            if(nums[i]> 0)break;
            int right = nums.size()-1;
            int left = i+1;
            while(right > left){
                if(nums[i] + nums[left] + nums[right] > 0 ){
                    right--;
                }
                else if(nums[i] + nums[left] + nums[right] < 0 ){
                    left++;
                }
                else{
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                }
            }
        }

        return result;

    }
};

int main() {
    
    return 0;
}