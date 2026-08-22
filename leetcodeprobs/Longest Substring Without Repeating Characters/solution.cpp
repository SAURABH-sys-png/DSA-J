#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0;
        int ans = 0;
        int right = 0;
        int n = s.size();
        unordered_map<char, bool> seen = {
            {'a', false}, {'b', false}, {'c', false}, {'d', false}, {'e', false}, {'f', false}, {'g', false}, {'h', false}, {'i', false}, {'j', false}, {'k', false}, {'l', false}, {'m', false}, {'n', false}, {'o', false}, {'p', false}, {'q', false}, {'r', false}, {'s', false}, {'t', false}, {'u', false}, {'v', false}, {'w', false}, {'x', false}, {'y', false}, {'z', false}};

        for (int i = 0; i < n; i++)
        {
            char ch = s[i];

            if (seen[ch] == false)
            {
                ans = max(ans, right - left + 1);
                seen[ch] = true;
                right++;
            }
            else
            {
                while (seen[ch] != false)
                {
                    seen[s[left]] = false;
                    left++;
                }
            }
        }

        return ans;
    }
};