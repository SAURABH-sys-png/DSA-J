#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> stk;

        istringstream sep(s);
        string wrd;
        while (sep >> wrd)
        {
            stk.push_back(wrd);
        }

        string res = "";
        int n = stk.size();
        for (int i = n-1; i >= 0; i--)
        {
            res += stk[i];
            if (i != 0)
            {
                res += " ";
            }
        }
        return res;
    }
};