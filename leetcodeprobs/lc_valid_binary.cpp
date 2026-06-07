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
    void generateValidStrings(int n, string current, vector<string> &result)
    {
        if (current.length() == n)
        {
            result.push_back(current);
            return;
        }
        generateValidStrings(n, current + '0', result);
        if (current.empty() || current.back() == '0')
        {
            generateValidStrings(n, current + '1', result);
        }
    }
    int fcost(string s)
    {
        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                res += i;
            }
        }

        return res;
    }
    vector<string> generateValidStrings(int n, int k)
    {
        // valid binary stringss ith cost limits
        //  int n and k is given
        //  binary ko valid bana
        //
        vector<string> result;
        generateValidStrings(n, "", result);
        vector<string> balid_str;
        for (auto &s : result)
        {
            if (fcost(s) <= k)
            {
                balid_str.push_back(s);
            }
        }
        return balid_str;
    }
};

void solve()
{
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}