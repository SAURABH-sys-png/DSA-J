#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int indexf = 1e9; // Initialized to a large value to prevent garbage data if target is not found
        int indexb = 1e9; // Initialized to a large value to prevent garbage data if target is not found
        int n = nums.size();

        for (int i = start; i < n; i++)
        {
            if (nums[i] == target)
            {
                indexf = i;
                break;
            }
            
        }
        for (int j = start; j >= 0; j--)
        {
            if (nums[j] == target)
            {
                indexb = j;
                break;
            }
            
        }
        int result;
        result = std::min(abs(indexf-start),abs(indexb-start));


        return result;
         
        
    }
};

int main(){
    Solution sol;
    vector<int> nums = {5,4,5,3,24,8,0,2344};
    int target = 24;
    int start = 2;
    cout << sol.getMinDistance(nums,target,start) << endl;
    cout << sol.getMinDistance(nums,target,start) << endl;

}