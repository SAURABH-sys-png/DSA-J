#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int res = 0;
        unordered_set<char> charSet;
        int left = 0;

        for (int i = 0; i < s.size(); i++)
        {
            // If duplicate found, remove characters from left until duplicate is gone
            while (charSet.find(s[i]) != charSet.end())
            {
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[i]);
            res = max(res, (int)charSet.size());
        }

        return res;
    }
};

int main()
{
    Solution sol;
    string s = "aabrakadabra";

    int res = sol.lengthOfLongestSubstring(s);

    cout << res;
}