#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

vector<vector<int>> mergepairs(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    int a = intervals[0][0];
    int b = intervals[0][1];

    vector<vector<int>> res;

    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] > b)
        {
            res.push_back({a, b});
            a = intervals[i][0];
            b = intervals[i][1];
        }
        else if (b >= intervals[i][0] && b <= intervals[i][1])
        {
            b = intervals[i][1];
        }
    }

    res.push_back({a, b});
    return res;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> res = mergepairs(intervals);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i][0] << " " << res[i][1] << endl;
    }

    return 0;
}