#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int idx_one = INT_MAX;
    int idx_zer = INT_MAX;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            idx_one = min(idx_one, i);
        }
        else
        {
            idx_zer = min(idx_zer, i);
        }
    }

    string res = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (i == idx_one || idx_zer == i)
        {
            continue;
        }
        else
        {
            res += s[i];
        }
    }

    cout << res << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}