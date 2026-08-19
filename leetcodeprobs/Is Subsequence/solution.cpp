#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        // O(n+m);

        int s_ptr = 0;
        int t_ptr = 0;

        while (t_ptr < m)
        {
            char tch = t[t_ptr];
            char sch = s[s_ptr];

            if (tch == sch)
            {
                t_ptr++;
                s_ptr++;
            }
            else if (tch != sch)
            {
                s_ptr++;
                if (s_ptr == n)
                {
                    return false;
                }
            }
        }
        return true;
    }
};