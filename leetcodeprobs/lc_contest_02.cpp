#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int maximumSaleItems(vector<vector<int>> &items, int budget)
    {
        // 2d int array items krke a
        int n = items.size(); // no of row

        vector<int> val(n, 1);
        int mini = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            mini = min(mini, items[i][1]);

            for (int j = 0; j < n; j++)
            {
                if (i != j && items[j][0] % items[i][0] == 0)
                {
                    val[i]++;
                }
            }
        }

        // knapsack dp
        vector<int> k_dp(budget + 1, -1);
        k_dp[0] = 0;

        for (int k = 0; k < n; k++)
        {
            int cost = items[k][1];
            int value = val[k];

            for (int w = budget; w >= cost; w--)
            {
                if (k_dp[w - cost] != -1)
                {
                    k_dp[w] = max(k_dp[w], k_dp[w - cost] + value);
                }
            }
        }

        int res = 0;
        for (int w = 0; w <= budget; w++)
        {
            if (k_dp[w] != -1)
            {
                int left = budget - w;
                int extra_cost = left / mini;
                res = max(res, k_dp[w] + extra_cost);
            }
        }

        return res;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    return 0;
}