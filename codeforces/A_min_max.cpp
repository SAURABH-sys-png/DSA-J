#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    int ones = 0;
    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }
    if (ones > zeros)
    {
        cout << "Bessie" << endl;
    }
    else if (ones < zeros)
    {
        cout << "Elsie" << endl;
    }
    else
    {
        cout << "Bessie" << endl;
    }
}
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}