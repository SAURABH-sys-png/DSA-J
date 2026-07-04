#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;



class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = (n+1)/2;
        mid--;
        int num = nums[mid];

        for (int i = 0; i < n; i++)
        {
            if (i != mid && nums[i] == num)
            {
                return false;   
            }
            
        }
        return true;
    }
};

int main() {
    vector<int> nums = {1};
    Solution sol;
    int ans = sol.isMiddleElementUnique(nums);
    cout << ans << endl;

    return 0;
}