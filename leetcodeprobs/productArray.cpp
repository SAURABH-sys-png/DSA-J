#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

//QS = = 

class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();

        vector<int> result;

        int countz = 0;
        int product = 1;
        int index = -1;

        for(int i = 0;i<size;i++){
            if(nums[i] == 0){
                countz++;
                index = i;
            }
            else{
                product = product * nums[i];            
            }

        }

        if(countz == 0){
            for(int j = 0;j<size;j++){
                result.push_back(product/nums[j]);

            }
        }
        else if(countz == 1){
            for(int h = 0;h<size;h++){
                if(h == index){
                    result.push_back(product);
                }
                else{
                    result.push_back(0);
                }
            }
        }
        else{
            for(int k = 0;k<size;k++){
                result.push_back(0);
            }
        }

        return result;
    }
};

int main() {

    Solution soln;

    vector<int> arr = {2,3,4,5,17,-1,-3};

    vector<int> final = soln.productExceptSelf(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << final[i] << endl;
    }
    
    
    return 0;
}
