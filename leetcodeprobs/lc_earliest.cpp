#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int earliestFinishTime(vector<int> &landStartTime, vector<int> &landDuration, vector<int> &waterStartTime, vector<int> &waterDuration)
    {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int fres = 1e9;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                int landFinish = landStartTime[i] + landDuration[i];
                int waterStart = max(landFinish, waterStartTime[j]);
                int currentOptionA = waterStart + waterDuration[j];

                int waterFinish = waterStartTime[j] + waterDuration[j];
                int landStart = max(waterFinish, landStartTime[i]);
                int currentOptionB = landStart + landDuration[i];

                int bestForThisPair = min(currentOptionA, currentOptionB);

                fres = min(fres, bestForThisPair);
            }
        }

        return fres;
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