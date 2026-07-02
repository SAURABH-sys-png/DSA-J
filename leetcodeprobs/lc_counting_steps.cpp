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
    int climbStairs(int n, vector<int> &costs)
    {
        vector<int> dp(n+1,0);
        dp[0] = 0;

        for (int i = 1; i <=n ; i++)
        {
            int prev_1 = 0;
            int prev_2 = 0;
            int prev_3 = 0;

            // calculating prev_1 [ j-i=  1 && costs[i-1] + dp[i-1]]

            if (i>2)
            {
                prev_1 = 1 + costs[i-1] + dp[i-1];
                prev_2 = 4 + costs[i-1] + dp[i-2];
                prev_3 = 9 + costs[i-1] + dp[i-3];

            }
            else if(i >1){
                prev_1 = 1 + costs[i-1] + dp[i-1];
                prev_2 = 4 + costs[i-1] + dp[i-2];
                prev_3 = INT_MAX;
            }
            else{
                prev_1 = 1 + costs[i-1] + dp[i-1];
                prev_2 = INT_MAX;
                prev_3 = INT_MAX;
            }
            
            dp[i] = min({prev_1,prev_2,prev_3});
            
            
        }

        return dp[n];
        
    }
};

int main()
{
    Solution sol;
    vector<int> costs = {5,1,6,2};
    int n = costs.size();
    int result = sol.climbStairs(n, costs);
    cout << "Minimum cost to reach the top: " << result << endl;

    return 0;
}