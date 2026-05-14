#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int minMoves(vector<int> &nums, int limit)
{
    int n = nums.size();
    vector<int> res;

    for (int i = 0; i < n / 2; i++)
    {
        res.push_back(nums[i] + nums[n - 1 - i]);
    }

    int minSum = *min_element(res.begin(), res.end());
    int maxSum = *max_element(res.begin(), res.end());
    
    cout << "res values: ";
    for(int x : res) cout << x << " ";
    cout << "\nminSum: " << minSum << ", maxSum: " << maxSum << ", 2*limit: " << 2*limit << endl;
    cout << "Checking targets from " << max(2, minSum) << " to " << min(2*limit, maxSum) << endl;
    
    int minCost = INT_MAX;
    
    for (int target = max(2, minSum); target <= min(2 * limit, maxSum); target++)
    {
        int cost = 0;
        for (int sum : res)
        {
            cost += abs(sum - target);
        }
        cout << "target " << target << ": cost " << cost << endl;
        minCost = min(minCost, cost);
    }
    
    return minCost;
}

int main() {
    vector<int> nums = {1, 2, 4, 3};
    int limit = 2;
    cout << "Result: " << minMoves(nums, limit) << endl;
    return 0;
}
