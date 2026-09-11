#include <bits/stdc++.h>
using namespace std;

// "(1+(4+5+2)-3)+(6+8)"

class Solution
{
public:
    int idx;
    int calc(string &s)
    {
        int num = 0, res = 0, sign = 1;

        while (idx < s.length())
        {
            char ch = s[idx];
            if (ch >= '0' && ch <= '9')
            {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '(')
            {
                num = calc(s);
            }
            else if (ch == ')')
            {
                return (res + (sign * num));
            }
            else if (ch == '+' || ch == '-')
            {
                res += sign * num;
                num = 0;
                sign = (ch == '-') ? -1 : 1;
            }
        }

        return res + (sign * num);
    }
    int calculate(string s)
    {
        idx = 0;
        return calc(s);
    }
};

int main()
{
    return 0;
}