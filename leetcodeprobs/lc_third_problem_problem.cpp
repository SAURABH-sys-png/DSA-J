#include <bits/stdc++.h>

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;
#define ll long long

class Solution
{
public:
    long long calculateWeight(vector<int> &baseTime,
                              map<ll, vector<ll>> &mp,
                              int root)
    {
        // Leaf node
        if (mp.find(root) == mp.end())
        {
            return baseTime[root];
        }

        ll earliest = LLONG_MAX;
        ll latest = LLONG_MIN;

        for (auto child : mp[root])
        {
            ll currWeight = calculateWeight(baseTime, mp, child);

            earliest = min(earliest, currWeight);
            latest = max(latest, currWeight);
        }

        ll diff = latest - earliest;
        ll currDiff = baseTime[root] + diff;

        ll finishTime = latest + currDiff;

        return finishTime;
    }

    long long finishTime(int n,
                         vector<vector<int>> &edges,
                         vector<int> &baseTime)
    {
        map<ll, vector<ll>> mp;

        for (auto &r : edges)
        {
            mp[r[0]].push_back(r[1]);
        }

        ll ans = calculateWeight(baseTime, mp, 0);

        return ans;
    }
};

int main()
{

    return 0;
}