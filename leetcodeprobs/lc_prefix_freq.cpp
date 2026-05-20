#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        vector<int> res;
        int n = A.size();
        int common = 0;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == B[i])
                common++;
            else
            {
                freq[A[i]]++;
                freq[B[i]]++;
            }

            if (freq[A[i]] == 2)
                common++;
            if (freq[B[i]] == 2)
                common++;
            res.push_back(common);
        }
        return res;
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