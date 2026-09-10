#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> stk;

        for (auto &str : tokens)
        {
            if (str == "+")
            {
                int sec = stk.top();
                stk.pop();
                int ft = stk.top();
                stk.pop();
                stk.push(ft + sec);
            }
            else if (str == "-")
            {
                int sec = stk.top();
                stk.pop();
                int ft = stk.top();
                stk.pop();
                stk.push(ft - sec);
            }
            else if (str == "*")
            {
                int sec = stk.top();
                stk.pop();
                int ft = stk.top();
                stk.pop();
                stk.push(ft * sec);
            }
            else if (str == "/")
            {
                int sec = stk.top();
                stk.pop();
                int ft = stk.top();
                stk.pop();
                stk.push(ft / sec);
            }
            else{
                int num = stoi(str);
                stk.push(num);
            }
        }
        return stk.top();
    }
};

int main()
{
    return 0;
}