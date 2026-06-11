#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

vector<vector<int>> mergepairs(vector<vector<int>> &merge_this)
{
    sort(merge_this.begin(), merge_this.end());
    int a = merge_this[0][0];
    int b = merge_this[0][1];

    vector<vector<int>> res;

    for (int i = 1; i < merge_this.size(); i++)
    {
        if (merge_this[i][0] > b)
        {
            res.push_back({a, b});
            a = merge_this[i][0];
            b = merge_this[i][1];
        }
        else if (b >= merge_this[i][0] && b <= merge_this[i][1])
        {
            b = merge_this[i][1];
        }
    }

    res.push_back({a, b});
    return res;
}

int main()
{
    vector<vector<int>> merge_this = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> res = mergepairs(merge_this);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i][0] << " " << res[i][1] << endl;
    }

    return 0;
}