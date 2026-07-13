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
    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = grid[i][j];
                }
                else if (i == 0)
                {
                    dp[i][j] = dp[i][j - 1] + grid[i][j];
                }
                else if (j == 0)
                {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                }
                else
                {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
                }
            }
        }

        return dp[n-1][m-1];
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    int result = sol.minPathSum(grid);
    cout << "Minimum Path Sum: " << result << endl;
    return 0;
}