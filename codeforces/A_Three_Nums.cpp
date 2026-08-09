#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int mid = a + b + c - maxi - mini;

    maxi = min(maxi, mini + mid);

    cout << maxi - mini << '\n';
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
