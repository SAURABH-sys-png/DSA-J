#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();

        sort(strs.begin(), strs.end());

        string st = strs[0];
        string end = strs[n - 1];
        string ans = "";
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] != end[i])
            {
                return ans;
            }
            ans += st[i];
        }
        return ans;
    }
};