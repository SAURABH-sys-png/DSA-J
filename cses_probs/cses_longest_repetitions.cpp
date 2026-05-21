#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(string t)
{
    if(t.length() == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll ans = 1;
    ll temp = 1;

    for (ll i = 0; i < t.length() - 1; i++)
    {
        char ch = t[i];

        if (ch == t[i + 1])
        {
            temp++;
        }
        else
        {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string t = "";
    cin >> t;
    solve(t);

    return 0;
}