#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // brute force approch not the final approch
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int cnt = 1;
        int prev = nums[0];
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == prev) {
                continue;
            }
            if (nums[i] - prev > 1) {

                res = max(cnt, res);
                cnt = 0;
            }
            prev = nums[i];
            cnt++;
        }
        res = max(res,cnt);

        return res;
    }
};


int main(){
  return 0;
}
