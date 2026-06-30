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
    void updt(char ch, bool &a, bool &b, bool &c)
    {
        if (ch == 'a')
        {
            a = true;
        }
        else if (ch == 'b')
        {
            b = true;
        }
        else
        {
            c = true;
        }
    }
    // abcabc
    int numberOfSubstringssr(string s)
    {
        int n = s.size();

        bool a = false;
        bool b = false;
        bool c = false;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            a = false;
            b = false;
            c = false;

            updt(s[i], a, b, c);

            for (int j = i + 1; j < n; j++)
            {
                updt(s[j], a, b, c);
                if (a && b && c)
                {
                    cnt = cnt + (n - j);
                    break;
                }
            }
        }
        // abc,abca,abcab,abcabc,bca,bcabc,cab,cabc,abc
        return cnt;
    }

    int numberOfSubstrings(string s)
    {

        int last_a = -1, last_b = -1, last_c = -1;
        int cnt = 0;
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                last_a = i;
            else if (s[i] == 'b')
                last_b = i;
            else if (s[i] == 'c')
                last_c = i;

            if (last_a != -1 && last_b != -1 && last_c != -1)
            {

                cnt += (1 + min({last_a, last_b, last_c}));
            }
        }
        return cnt;
    }
};

int main()
{

    string s = "abcabc";
    Solution sol;

    int res = sol.numberOfSubstrings(s);

    cout << res << endl;

    return 0;
}