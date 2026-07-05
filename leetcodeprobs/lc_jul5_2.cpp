#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:
    bool isSubsequenceAfterOneReplacement(string s, string t)
    {
        int i = 0, j = 0;
        bool rused = false;

        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else if (!rused)
            {
                rused = true;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if (!rused && i < s.size() && j < t.size())
        {
            rused = true;
            i++;
            j++;
        }

        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
                i++;
            j++;
        }

        return i == s.size();
    }
};

int main()
{

    return 0;
}