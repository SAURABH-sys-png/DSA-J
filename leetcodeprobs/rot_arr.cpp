#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> nums_copy(n);
        int idx = 0;
        for (int i = 0; i < n; i++) {
            idx = (i + k) % n;
            nums_copy[idx] = nums[i];
        }
        //cr
        for (int j = 0; j < n; j++) {
            nums[j] = nums_copy[j];
        }
    }
};

void opti(vector<int>&nums,int k){

}

int main(){}

