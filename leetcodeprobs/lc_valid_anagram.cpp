#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // if (s.size() != t.size())
        //     return false;
        // unordered_map<char, int> mp;

        // for (auto ch : s) {
        //     mp[ch] = mp[ch] + 1;
        // }

        // for (auto ch : t) {
        //     if (mp.find(ch) == mp.end() || mp[ch] == 0) {
        //         return false;
        //     }
        //     mp[ch] = mp[ch] - 1;
        // }

        // return true;

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        if (s.size() != t.size())
            return false;

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (int i = 0; i < s.size(); i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        return mp1 == mp2;
    }
};

int main()
{
    return 0;
}