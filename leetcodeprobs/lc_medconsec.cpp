#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;


const int MOD = 1e9 + 7;
class Solution
{
public:
    int x_sum(const string &s)
{
    long long current_mod = 0;
    long long sum = 0;

    for (char c : s)
    {
        if (c == '0')
            continue;

        int digit = c - '0';
        sum += digit;
        current_mod = (current_mod * 10 + digit) % MOD;
    }

    return (int)((current_mod * sum) % MOD);
}
    vector<int> sumAndMultiply(string s, vector<vector<int>> &queries)
    {
        int n = queries.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            int st = queries[i][0];
            int end = queries[i][1];
            int len = (end - st) + 1;

            string subStr = s.substr(st, len);
            ans[i] = x_sum(subStr);
        }

        return ans;
    }
};

int main()
{
    fastio
    string s = "10203004";
    vector<vector<int>> queries = {{0, 7}, {1, 3}, {4, 6}};

    Solution sol;
    vector<int> ans = sol.sumAndMultiply(s, queries);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << '\n';
    }

    return 0;
}