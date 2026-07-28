#include <bits/stdc++.h>
using namespace std;
#define vint vector<int>
class Solution
{
public:
    string smallestPalindrome(string s)
    {
        int n = s.size();
        vint arr(123, 0);
        for (int i = 0; i < n; i++)
        {
            int ch = static_cast<int>(s[i]);
            arr[ch]++;
        }
        char odd;
        string ans = "";
        for (int i = 97; i < 123; i++)
        {
            if (arr[i] % 2 != 0)
            {

                char ct = static_cast<char>(i);
                odd = ct;
                for (int j = 0; i < (arr[j] - 1) / 2; j++)
                {
                    ans += ct;
                }
                break;
            }
            else
            {

                char ch = static_cast<char>(i);
                for (int k = 0; k < arr[i] / 2; k++)
                {
                    ans += ch;
                }
            }
        }

        
        return ans;
    }
};
int main()
{
    string s = "dacccad";
    Solution sol;
    string res = sol.smallestPalindrome(s);
    cout << res << '\n';
    return 0;
}