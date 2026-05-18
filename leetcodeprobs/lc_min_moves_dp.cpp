#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        
        // Sort the array in ascending order
        sort(nums.begin(), nums.end());
        
        // Initialize dp table
        vector<vector<int>> dp(n, vector<int>(limit+1, 0));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= limit; ++j) {
                int cost = 0;
                for (int k = 0; k < n; ++k) {
                    cost += abs(nums[i] - nums[k]);
                }
                
                // Update dp table with minimum cost
                dp[i][j] =min(dp[i-1][j], dp[i][j-1]) + cost;
            }
        }
        
        return dp[n-1][limit];
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 4, 3};
    int limit = 5;
    
    int minMovesResult = solution.minMoves(nums, limit);
    
    cout << "Minimum number of moves required to make the array complementary: " << minMovesResult << std::endl;
    
    return 0;
}
