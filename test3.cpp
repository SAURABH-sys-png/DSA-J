#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int minMoves(vector<int> &nums, int limit)
{
    int n = nums.size();
    int minCost = INT_MAX;
    
    for (int target = 2; target <= 2 * limit; target++)
    {
        int cost = 0;
        
        for (int i = 0; i < n / 2; i++)
        {
            int left = nums[i];
            int right = nums[n - 1 - i];
            int sum = left + right;
            
            if (sum == target)
            {
                continue;
            }
            
            bool canChangeLeft = (target - right >= 1 && target - right <= limit);
            bool canChangeRight = (target - left >= 1 && target - left <= limit);
            
            if (canChangeLeft || canChangeRight)
            {
                cost += 1;
            }
            else
            {
                cost += 2;
            }
        }
        
        cout << "Target " << target << ": cost " << cost << endl;
        minCost = min(minCost, cost);
    }
    
    return minCost;
}

int main() {
    vector<int> nums = {1, 2, 4, 3};
    int limit = 4;
    cout << "\nResult: " << minMoves(nums, limit) << endl;
    return 0;
}
