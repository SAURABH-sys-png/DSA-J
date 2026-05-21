#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
    {
        unordered_set<int> all_prefix_arr1;
        int n = arr1.size();
        for (int i = 0; i < n; i++)
        {
            int num = arr1[i];
            while (num > 0)
            {
                all_prefix_arr1.insert(num);
                num /= 10;
            }
        }

        int m = arr2.size();
        int longest_prefix = 0;
        for (int i = 0; i < m; i++)
        {
            int num = arr2[i];
            while (num > 0)
            {
                if (all_prefix_arr1.count(num))
                {
                    longest_prefix = max(longest_prefix, num);
                }
                num /= 10;
            }
        }
        string result = to_string(longest_prefix);
        if(longest_prefix == 0)return 0;
        return result.length();
    }
};

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}