#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int trap(vector<int>& height) {
        // left_max = 4
        // 2+
        // 
        int res = 0;
        int left_max = 0;
        int right_max = 0;
        int l_ptr = 0;
        int r_otr = height.size()-1;
        
        while(l_ptr < r_ptr){
            // cases -> left_max < right_max
            left_max = max(left_max,height[l_ptr]);
            right_max = max(right_max,height[r_ptr]);
            if(left_max < right_max){
                res+=left_max-height[l_ptr];
                l_ptr++;
            }
            else{
                res+=right_max-height[r_ptr];
                r_ptr--;
            }
        }
        return res;
    }
};
int main(){

    return 0;
}