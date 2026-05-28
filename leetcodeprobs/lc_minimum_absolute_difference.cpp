#include <iostream>

using namespace std; 
class Solution {
public:
    int smaller(int a,int b){
        if(a>b){
            return b;
        }
        else if(b>a){
            return a;
        }
        else {
            return a;
        }
    }
    int minAbsoluteDifference(vector<int>& nums) {
        int prevint = 0;
        int prevind = -1;
        int currentind = 0;
        int result = -1;
        int diff = 200;

        for(int i = 0;i<nums.size();i++){
            if(prevint == 0 && (nums[i] == 1 || nums[i] == 2)){
                prevint = nums[i];
                prevind = i;
            }
            else if(prevint == nums[i]){
                prevint = nums[i];
                prevind = i;
            }
            else if((prevint != nums[i])  &&  (nums[i] !=0)){
                diff = smaller(diff,i-prevind);
                prevint = nums[i];
                prevind = i;
            }
        
            
            
        }
        if(diff == 200){
            diff = -1;
        }

        return diff;
    }
};

int main() {
    // Problem: minimum absolute difference.
    // Time Complexity: O(...) based on Solution::smaller implementation.
    // Space Complexity: O(...) based on Solution::smaller implementation.
    Solution obj;
    int arg1 = 5;
    int arg2 = 5;
    auto result = obj.smaller(arg1, arg2);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
