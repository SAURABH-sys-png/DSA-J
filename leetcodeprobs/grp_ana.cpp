#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        int n = strs.size();

        // "eat" -> aet
        // "tea" -> aet

        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < n; i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto &[key, arr] : mp)
        {
            vector<string> tmp;
            for (auto &str : arr)
            {
                tmp.push_back(str);
            }
            ans.push_back(tmp);
        }

        return ans;
    }
};
int main()
{
    return 0;
}