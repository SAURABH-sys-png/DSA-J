#include <bits/stdc++.h>
using namespace std;
#define vint vector<int>
// class Solution
// {
// public:
//     string smallestPalindrome(string s)
//     {
//         //
//         int n = s.size();
//         // 97 -> 122
//         vint arr(123, 0);
//         for (int i = 0; i < n; i++)
//         {
//             int ch = static_cast<int>(s[i]);
//             arr[ch]++;
//         } // abbba
//         // o(n)
//         char odd;
//         string ans = "";
//         for (int i = 97; i < 123; i++)
//         {
//             if (arr[i] % 2 != 0)
//             {

//                 char ct = static_cast<char>(i);
//                 odd = ct;
//                 for (int j = 0; i < (arr[j] - 1) / 2; j++)
//                 {
//                     ans += ct;
//                 }
//                 break;
//             }
//             else
//             {

//                 char ch = static_cast<char>(i);
//                 for (int k = 0; k < arr[i] / 2; k++)
//                 {
//                     ans += ch;
//                 }
//             }
//         }
//         string ft = ans;
//         reverse(ans.begin(), ans.end());

//         for (size_t i = 0; i < arr[odd]; i++)
//         {
//             char od = static_cast<char>(odd);
//             ft += od;
//         }
//         ft += ans;
//         return ft;
//     }
// };

class Solution
{
public:
    string smallestPalindrome(string s)
    {
        int n = s.size();
        string ans = "";
        string res = "";
        unordered_map<char, int> fq;
        for (char ch : s)
        {
            fq[ch]++;
        }
        // frequency count of every element in the given string
        // o(n*logn+n)
        if (n & 1)
        {
            // odd
            
        }
        else
        {
            // even case
            for (size_t i = 97; i < 123; i++)
            {
                char ch = static_cast<char>(i);

                if (fq.find(ch) != fq.end())
                {
                    int freq = fq[ch];
                    for (size_t j = 0; j < freq / 2; j++)
                    {
                        ans += ch;
                    }
                }
            }
            res+=ans;
            reverse(ans.begin(),ans.end());
            res+=ans;
            return res;
        }
    }
};
int main()
{
    string s = "daccad";
    Solution sol;
    string res = sol.smallestPalindrome(s);
    cout << res << '\n';
    return 0;
}