#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        int n = s.size();
        int no_row = numRows;
        vector<bool> seen(n,false);
        string ans = "";
        int gap = numRows;
        int st = 0;

        while (st <= numRows - 1)
        {
            int i = st;
            while (i <= n - 1)
            {
                if (seen[i]== false)
                {
                    ans += s[i];
                    i = i + numRows;
                    seen[i] = true;
                }
                else{
                    i++;
                }
            }
            st++;
            gap--;
        }
    }
};

int main()
{

    return 0;
}