#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int sum = 0;
    int cnt2 = 0, cnt3 = 0;

    for (char c : s)
    {
        int d = c - '0';
        sum += d;

        if (d == 2) cnt2++;
        if (d == 3) cnt3++;
    }

    for (int x = 0; x <= min(cnt2, 9); x++)
    {
        for (int y = 0; y <= min(cnt3, 9); y++)
        {
            if ((sum + 2 * x + 6 * y) % 9 == 0)
            {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();
}