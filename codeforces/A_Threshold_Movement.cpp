#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int min_odd = INT_MAX;
    int max_ev = 0;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if (i & 1)
        {
            min_odd = min(min_odd, temp);
        }
        else
        {
            max_ev = max(max_ev, temp);
        }
    }
    if(n&1){ 
        cout << "NO" << '\n';
        return;
    }
    if (min_odd - max_ev > 1)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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