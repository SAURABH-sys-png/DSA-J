#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    long long maxTotal(vector<int>& nums, string s) {
        // array of unums 
        int n = nums.size();
        // up then contains a token and 0 for no token 
        // use map to track the <index,moved>

        // 
        ll ans = 0;
        if(s[0] == 1){
            ans = ans + nums[0];
        }
        for(int i = 1;i<n;i++){
            if(s[i] == '1'){
              if(nums[i] > nums[i-1]) {
                  ans+=nums[i];
              } 
                else{
                    ans+=nums[i-1];
                }
            }
        }

        return ans;
    }
};