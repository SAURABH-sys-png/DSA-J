#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;

        int biggest = max({a, b, c});
        int mini = min({a, b, c});
        int mid = sum - biggest - mini;

        if (mini + mid <= biggest)
        {
            cout << mid << '\n';
        }

        else
        {
            cout << biggest - mini << '\n';
        }
    }
}

int main()
{
    solve();
    return 0;
}