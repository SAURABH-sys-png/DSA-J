#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int indexof(vector<char> sub, char n)
    {
        int res = -1;

        for (int i = 0; i < sub.size(); i++)
        {
            if (sub[i] == n)
            {
                return i;
            }
        }

        return res;
    }

    int lengthOfLongestSubstring(string s)
    {

        int res = 0;
        vector<char> substring;

        for (int i = 0; i < s.size(); i++)
        {
            if (indexof(substring, s[i]) >= 0)
            {
                substring.erase(substring.begin(), substring.begin() + indexof(substring, s[i]) + 1);
                substring.push_back(s[i]);
                // kush to bhi karna hai
            }
            else
            {
                substring.push_back(s[i]);
            }
            int count = substring.size();

            res = max(res, count);
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