#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minimumCost(vector<int> &cost)
    {
        sort(cost.begin(), cost.end());

        int min_cost = 0;
        int tmp = 0;
        for (int i = cost.size() - 1; i >= 0; i--)
        {
            if (tmp == 0 || tmp == 1)
            {
                min_cost += cost[i];
                tmp++;
            }
            else
            {
                tmp = 0;
            }
        }

        return min_cost;
    }
};

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}