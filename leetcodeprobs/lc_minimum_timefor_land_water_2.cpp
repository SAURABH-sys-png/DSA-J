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

        vector<pair<int, int>> v_land(n);
        for (int i = 0; i < n; i++)
        {
            v_land[i] = {landStartTime[i], landDuration[i]};
        }
        sort(v_land.begin(), v_land.end());

        vector<pair<int, int>> v_water(m);
        for (int i = 0; i < m; i++)
        {
            v_water[i] = {waterStartTime[i], waterDuration[i]};
        }
        sort(v_water.begin(), v_water.end());

        // we have the map or say matrix prepared (n + m + nlogn + mlogm)

        // now we find prefix minim and suffix minium 

        vector<int> al(n);
        vector<int> bl(n);
        for (int i = 0; i < n; i++)
        {
            al[i] = v_land[i].first;
            bl[i] = v_land[i].second;
        }
        vector<int> preMin(n);
        preMin[0] = bl[0];
        for (int i = 1; i < n; i++)
        {
            preMin[i] = min(preMin[i - 1], bl[i]);
        }
        vector<int> sufMin(n);
        sufMin[n - 1] = al[n - 1] + bl[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            sufMin[i] = min(sufMin[i + 1], al[i] + bl[i]);
        }
        
        // for water
        vector<int> aw(m);
        vector<int> bw(m);
        for (int i = 0; i < m; i++)
        {
            aw[i] = v_water[i].first;
            bw[i] = v_water[i].second;
        }
        vector<int> preMinW(m);
        preMinW[0] = bw[0];
        for (int i = 1; i < m; i++)
        {
            preMinW[i] = min(preMinW[i - 1], bw[i]);
        }
        vector<int> sufMinW(m);
        sufMinW[m - 1] = aw[m - 1] + bw[m - 1];
        for (int i = m - 2; i >= 0; i--)
        {
            sufMinW[i] = min(sufMinW[i + 1], aw[i] + bw[i]);
        }


        // step 1 complete

        
        for (int i = 0; i < n; i++)
        {
            int finish1 = al[i] + bl[i];
            // Binary search to split water rides
            int idx = upper_bound(aw.begin(), aw.end(), finish1) - aw.begin();
            
            // For rides that start <= finish1 (early group), use prefix minimum
            if (idx > 0)
            {
                fres = min(fres, finish1 + preMinW[idx - 1]);
            }
            
            // For rides that start > finish1 (late group), use suffix minimum
            if (idx < m)
            {
                fres = min(fres, sufMinW[idx]);
            }
        }

        // Order 2: Water then Land
        for (int i = 0; i < m; i++)
        {
            int finish1 = aw[i] + bw[i];
            // Binary search to split land rides
            int idx = upper_bound(al.begin(), al.end(), finish1) - al.begin();
            
            // For rides that start <= finish1 (early group), use prefix minimum
            if (idx > 0)
            {
                fres = min(fres, finish1 + preMin[idx - 1]);
            }
            
            // For rides that start > finish1 (late group), use suffix minimum
            if (idx < n)
            {
                fres = min(fres, sufMin[idx]);
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