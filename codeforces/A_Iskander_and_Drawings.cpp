#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

// #*##*##
void solve()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    ll max_len = 0;
    ll curr_len = 0;
    bool prev = false;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (!prev && c == '#')
        {
            curr_len = 1;
            prev = true;
        }
        else if (prev && c == '#')
        {
            curr_len++;
        }
        else if (c == '*')
        {
            prev = false;
        }

        max_len = max(max_len,curr_len);
    }
    ll ans = 0;

    if (max_len%2==0)
    {
        ans = max_len/2;
    }
    else{
        ans = (max_len+1)/2;
    }
    
    cout<<ans<<'\n';
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