#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(int t)
{
    if ( t == 2 || t == 3 )
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    else if (t == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (t == 4)
    {
        cout << "2 4 1 3" << endl;
        return;
    }
    else
    {
        for (ll i = 0; i < t; i++)
        {
            if (t - 2 * i > 0)
            {
                cout << t - 2 * i << " ";
            }
        }
        for (ll i = 0; i < t; i++)
        {
            if (t - 2 * i - 1 > 0)
            {
                cout << t - 2 * i - 1 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    solve(t);

    return 0;
}