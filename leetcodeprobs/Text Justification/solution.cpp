#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string indi(const vector<string> &tmp, bool isLast, int sz, int maxWidth)
    {
        string ans = "";

        if (!isLast)
        {
            int spaces = maxWidth - sz;
            int n = tmp.size();
            int slots = n - 1;

            if (slots == 0)
            {
                ans += tmp[0];

                while (ans.size() < maxWidth)
                    ans += " ";

                return ans;
            }

            int eq = spaces / slots;
            int rem = spaces % slots;

            for (int i = 0; i < n - 1; i++)
            {
                ans += tmp[i];
                ans.append(eq, ' ');
                if (i < rem)
                    ans += " ";
            }

            ans += tmp[n - 1];
        }
        else
        {

            for (int i = 0; i < tmp.size(); i++)
            {
                ans += tmp[i];

                if (i != tmp.size() - 1)
                    ans += " ";
            }

            while (ans.size() < maxWidth)
                ans += " ";
        }

        return ans;
    }
    vector<string> fullJustify(vector<string> &words, int maxWidth)
    {
        vector<string> wrds;
        vector<string> result;
        bool isLast = false;

        int cnt = 0; // 1 -> 2 -> 3
        int sz = 0;  // 4 -> 6 -> 8

        for (auto word : words)
        {
            int wd_sz = word.size();
            if (sz + cnt + wd_sz > maxWidth)
            {
                result.push_back(indi(wrds, isLast, sz, maxWidth));

                wrds.clear();
                wrds.push_back(word);

                sz = wd_sz;
                cnt = 1;
            }
            else
            {
                wrds.push_back(word);
                sz += wd_sz;
                cnt++;
            }
        }
        isLast = true;
        result.push_back(indi(wrds, isLast, sz, maxWidth));
        return result;
    }
};