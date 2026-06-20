#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

#define ll long long
class Solution
{
public:
    vector<string> createGrid(int m, int n)
    {
        // m is the number of rows
        // n is the coloumns
        char a = '.';
        char b = '#';
        vector<string> ans;
        for (int i = 0; i < m; i++)
        {
            string row = "";
            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    row += a;
                }
                else if (j == n - 1)
                {
                    row += a;
                }
                else
                {
                    row += b;
                }
            }

            ans.push_back(row);
        }
        return ans;
    }
};

int main()
{
    fastio
        Solution sol;

    return 0;
}