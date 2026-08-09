#include <bits/stdc++.h>

using namespace std;
#define ll long long
class Solution
{
public:
    ll cnt_subarrays(vector<int> &nums, int left, int r)
    {
        if (r - left + 1 < 3)
            return 0;
        ll res = 0;
        int prev_peak = -1;
        for (int i = left + 2; i <= r; i++)
        {
            int k = i - 1;
            if (nums[k] > nums[k - 1] && nums[k] > nums[k + 1])
                prev_peak = k;
            if (prev_peak != -1)
            {
                res += prev_peak - left;
            }
        }
        return res;
    }
    vector<ll> countOfPeaks(vector<int> &nums, vector<vector<int>> &queries)
    {
        int sz = queries.size();
        vector<ll> res;
        for (auto &qry : queries)
        {
            if (qry[0] == 1)
            {
                ll tmp = cnt_subarrays(nums, qry[1], qry[2]);
                res.push_back(tmp);
            }
            else
            {
                nums[qry[1]] = qry[2];
            }
        }
        return res;
    }
};
int main()
{
}