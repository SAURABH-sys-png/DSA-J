#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // Helper number one or the qry1
    void qry1(vector<int> &nums2, int x, int y, int val)
    {
        for (int i = x; i <= y; ++i)
        {
            nums2[i] += val;
        }
    }
    // two sum
    int tw_sum(const vector<int> &nums1, const vector<int> &nums2, int tot)
    {
        int res = 0;
        for (int j = 0; j < nums1.size(); ++j)
        {
            for (int k = 0; k < nums2.size(); ++k)
            {
                if (nums1[j] + nums2[k] == tot)
                {
                    res++;
                }
            }
        }
        return res;
    } // we made the initial two functions no issue
    vector<int> numberOfPairs(vector<int> &nums1, vector<int> &nums2, vector<vector<int>> &queries)
    {
        vector<int> answer;

        for (const auto &query : queries)
        {
            if (query[0] == 1)
            {
                //type 1
                int x = query[1];
                int y = query[2];
                int val = query[3];
                qry1(nums2, x, y, val);
            }
            else if (query[0] == 2)
            {
                // type 2
                int tot = query[1];
                int result = tw_sum(nums1, nums2, tot);
                answer.push_back(result); 
            }
        }

        return answer;
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