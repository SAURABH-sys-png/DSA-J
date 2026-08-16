#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;

        vector<string> matrix(numRows);

        int n = s.size();

        bool down = true;
        bool up = false;

        int ptr = 0;

        while (ptr < n)
        {
            if (down)
            {
                for (int i = 0; i < numRows; i++)
                {
                    matrix[i].push_back(s[ptr]);
                    ptr++;
                    if (ptr == n)
                        break;
                }
                down = false;
                up = true;
            }
            if (up)
            {
                for (int i = numRows - 2; i >= 0; i--)
                {
                    matrix[i].push_back(s[ptr]);
                    ptr++;
                    if (ptr == n)
                        break;
                }
                up = false;
                down = true;
            }
        }
        string res = "";
        for(auto str : matrix){
            res+=str;
        }
        return res;
    }
};