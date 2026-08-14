#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size();
        bool flag = false;
        int len = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (ch != ' ')
            {
                flag = true;
                len++;
            }
            else if (flag)
            {
                break;
            }
        }

        return len;
    }
};