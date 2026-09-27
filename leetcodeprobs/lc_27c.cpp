#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSubarray(vector<int>& nums) {
        int n = (int)nums.size();
        
        map<pair<int,int>,int> mp;
        unordered_map<int,int> acs;


        for(int i = 0;i<n;i++){
            acs[nums[i]] = i;
        }

        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                int num1 = nums[i];
                int num2 = nums[j];
                int sum = num1+num2;

                if(acs.find(sum)!=acs.end()){
                    // it exist
                    mp[{i,j}] = acs[sum];
                }
            }
        }

        


    }
};