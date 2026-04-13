#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        // Initialize min_dist with a very large number
        int min_dist = 1e9; 
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                // Update min_dist if we find a closer target
                min_dist = min(min_dist, abs(i - start));
            }
        }

        return min_dist;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 4, 5, 3, 24, 8, 0, 2344};
    int target = 24;
    int start = 2;
    
    // Output: 2 (because |4 - 2| = 2)
    cout << sol.getMinDistance(nums, target, start) << endl;

    return 0;
}