#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:
    long long maxRatings(vector<vector<int>> &units)
    {
        int m = units.size();
        int n = units[0].size();
        long long second_sum = 0;
        int mini = INT32_MAX;
        if (n == 1)
        {
            for (int i = 0; i < m; i++)
            {
                second_sum += units[i][0];
            }
            return second_sum;
        }
        else
        {
            vector<pair<int, int>> min_two(m);
            int i = 0;
            for (auto &row : units)
            {
                // sorted the array
                sort(row.begin(), row.end());
                // prepared the pair of vector as per unordered map for each row
                min_two[i].first = row[1];
                min_two[i].second = row[0];
                second_sum += row[1];
                mini = min(mini, row[0]);
                i++;
            }

            // use of greedy to find the removal and addition of one int tosome and removal from some

            sort(min_two.begin(), min_two.end());

            second_sum = second_sum - min_two[0].first;

            long long ans = second_sum + mini;

            return ans;
        }
    }
};