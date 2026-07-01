#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string temp = "";
    char prev = s[0];
    temp.push_back(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != prev)
        {
            temp.push_back(s[i]);
            prev = s[i];
        }
    }

    if (temp.size() <= 2)
    {
        cout << temp.size() << "\n";
        return;
    }
    else
    {
        cout << 1 << '\n';
        return;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}