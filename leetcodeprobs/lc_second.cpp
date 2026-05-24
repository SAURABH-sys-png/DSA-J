#include <bits/stdc++.h>

using namespace std;

#include <string>
using namespace std;

class Solution
{
public:
    int passwordStrength(string password)
    {
        int n = password.size();
        int res = 0;
        sort(password.begin(), password.end());
        string uniq = "";
        unordered_set<char> seen;

        for (char c : password)
        {
            if (seen.find(c) == seen.end())
            {
                seen.insert(c);
                uniq += c;
            }
        }

        for (int i = 0; i < n; i++)
        {
            char curr = password[i];
            int ascii = static_cast<int>(curr);

            if (ascii >= 97 && ascii <= 122)
            {

                res += 1;
            }
            else if (ascii >= 65 && ascii <= 90)
            {

                res += 2;
            }
            else if (ascii >= 48 && ascii <= 57)
            {

                res += 3;
            }
            else
            {

                res += 5;
            }
        }
        return res;
    }
};
void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}