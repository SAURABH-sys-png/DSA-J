#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        bool isPali = false;

        string ns = "";

        for (auto ch : s)
        {
            tolower(ch);
            if (ch >= 'a' && ch <= 'z')
                s += ch;
        }

        int ptr1 = 0;
        int ptr2 = ns.size() - 1;

        while (ptr1 < ptr2)
        {
            if (ns[ptr1 != ptr2])
                return false;
            ptr1++;
            ptr2--;
        }
        return true;
    }
};