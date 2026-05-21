#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll t)
{
    while (t != 1)
    {
        if (t % 2 == 0)
        {
            t /= 2;
        }
        else
        {
            t = 3 * t + 1;
        }
        cout << t << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    cout << t << " ";
    solve(t);

    return 0;
}