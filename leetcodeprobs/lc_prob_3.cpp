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
    vector<vector<int>> removeFreeInterval(vector<vector<int>> &occupied,
                                           int freeStart,
                                           int freeEnd)
    {
        vector<vector<int>> ans;

        for (auto &interval : occupied)
        {
            int l = interval[0];
            int r = interval[1];
            if (r < freeStart || l > freeEnd)
            {
                ans.push_back({l, r});
            }
            else if (l >= freeStart && r <= freeEnd)
            {
                continue;
            }
            else if (l < freeStart && r > freeEnd)
            {
                ans.push_back({l, freeStart - 1});
                ans.push_back({freeEnd + 1, r});
            }
            else if (l < freeStart)
            {
                ans.push_back({l, freeStart - 1});
            }
            else if (r > freeEnd)
            {
                ans.push_back({freeEnd + 1, r});
            }
        }

        return ans;
    }
    vector<vector<int>> mergeOccupiedIntervals(vector<vector<int>> &occupiedIntervals)
    {
        if (occupiedIntervals.empty())
            return {};

        sort(occupiedIntervals.begin(), occupiedIntervals.end());

        vector<vector<int>> merged;

        merged.push_back(occupiedIntervals[0]);

        for (int i = 1; i < occupiedIntervals.size(); i++)
        {
            int st = occupiedIntervals[i][0];
            int en = occupiedIntervals[i][1];

            // overlap OR touching
            if (st <= merged.back()[1] + 1)
            {
                merged.back()[1] = max(merged.back()[1], en);
            }
            else
            {
                merged.push_back({st, en});
            }
        }

        return merged;
    }
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>> &occupiedIntervals, int freeStart, int freeEnd)
    {
        vector<vector<int>> result = mergeOccupiedIntervals(occupiedIntervals);
        result = removeFreeInterval(result,freeStart,freeEnd);

        return result;
    }
};

int main()
{

    return 0;
}