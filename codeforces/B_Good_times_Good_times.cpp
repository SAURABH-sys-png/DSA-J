#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        int digits = 0;
        ll temp = x;
        while (temp)
        {
            digits++;
            temp /= 10;
        }

        ll y = 1;
        for (int i = 0; i < digits; i++)
            y *= 10;

        y++;

        cout << y << "\n";
    }

    return 0;
}