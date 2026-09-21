#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sz = n;
    int zr = 0;
    sz++;
    vector<int> prefzr(sz);
    prefzr[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        char ch = s[i-1];
        if (ch == '0')
        {
            prefzr[i] = prefzr[i-1] + 1;
            zr++;
        }
        else
        {
            prefzr[i] = prefzr[i-1];
        }
    }

    if(s[0]=='1'){
        cout << zr << '\n';
        return;
    }
    int res = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        int prevone = i - prefzr[i - 1];
        int nextzero = zr - prefzr[i];
        int sm = prevone + nextzero;
        res = min(sm, res);
    }
    cout << --res << '\n';
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}