#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:

    int makeValid(vector<int> &nums, int limit, vector<bool> &removed)
    {
        int n = nums.size();

        vector<int> dp(n, 0), parent(n, -1);

        int bestLen = 0;
        int last = -1;
        int available = 0;

        // DP
        for (int i = 0; i < n; i++)
        {
            if (removed[i])
                continue;

            available++;
            dp[i] = 1;

            for (int j = 0; j < i; j++)
            {
                if (removed[j])
                    continue;

                if (abs(nums[i] - nums[j]) <= limit &&
                    dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }

            if (dp[i] > bestLen)
            {
                bestLen = dp[i];
                last = i;
            }
        }

        if (available == 0)
            return 0;

        vector<bool> keep(n, false);

        while (last != -1)
        {
            keep[last] = true;
            last = parent[last];
        }

        int additionalRemovals = 0;

        for (int i = 0; i < n; i++)
        {
            if (removed[i])
                continue;

            if (!keep[i])
            {
                removed[i] = true;
                additionalRemovals++;
            }
        }

        return additionalRemovals;
    }
    int maxConsistentColumns(vector<vector<int>> &grid, int limit)
    {
        // 2d grid , int limit
        //

        int rows = grid.size();
        int cols = grid[0].size();
        vector<bool> removed(cols, false);
        vector<int> dpt(rows, 0);

        int count_ans = INT_MAX;

        for(const auto &row : grid)
        {
            vector<int> nums(row.begin(), row.end());
            int tmp = makeValid(nums, limit, removed);
            count_ans = min(count_ans, tmp);
        }
        return count_ans;
    }
};

int main()
{

    return 0;
}