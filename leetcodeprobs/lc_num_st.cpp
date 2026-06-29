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
    bool isSubString(string t, string word)
    {
        if (word.find(t) != string :: npos)
        {
            return true;
        }
        

        return false;
    }
    int numOfStrings(vector<string> &patterns, string word)
    {
        int n = patterns.size();

        int ans = 0;

        for (string &str : patterns)
        {
            if (isSubString(str, word))
            {
                ans++;
            }
        }

        return ans;
    }
};

int main()
{
    vector<string> patterns = {"abbbb", "b", "d"};
    string word = "aaabbbbc";

    Solution sol;

    int res = sol.numOfStrings(patterns, word);

    cout << res << '\n';

    return 0;
}