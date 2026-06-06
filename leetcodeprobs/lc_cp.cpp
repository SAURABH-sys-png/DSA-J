#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long long minEnergy(int n, int brightness, vector<vector<int>> &intervals)
    {
        if (brightness <= 0 || n <= 0)
        {
            return 0;
        }
        // int n is given representing n light bulbs index 0

        // int brightness is also given 2d array intervals

        // find the unique time intervals
        // implement greedy to find minimum number of bulbs
        sort(intervals.begin(), intervals.end());

        long long ex_size = 0;
        int st = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] > end)
            {
                // Non-overlapping: add previous merged interval
                ex_size += end - st + 1;
                st = intervals[i][0];
                end = intervals[i][1];
            }
            else
            {
                // Overlapping: extend the end
                end = max(end, intervals[i][1]);
            }
        }

        // Add the last merged interval
        ex_size += end - st + 1;

        if (ex_size == 0)
        {
            return 0;
        }

        int min_bulbs_req = minBulbs(n, brightness);
        if (min_bulbs_req == 1e9)
        {
            return -1;
        }

        return (long long)min_bulbs_req * ex_size;
    };
    long long minBulbs(int n, int brightness)
    {
        vector<int> prefix_min(brightness + 1, INT_MAX);

        // greeedy approach to find minimum number of bulbs
        int count = 0;
        prefix_min[0] = 0;
        int bulbs_placed = 0;
        int current_coverage = 0;

        if (n < brightness)
            return 1e9;

        int min_bulbs = (brightness + 2) / 3;

        if (brightness <= n)
        {

            return max((brightness + 2) / 3, 1);
        }

        return 1e9;
    }
};

int main()
{
}