#include <bits/stdc++.h>
using namespace std;

void gsolve(int n, int x)
{
    vector<tuple<double, int, int>> pairs(n, make_tuple(0, 0, 0));
    for (auto &[first, second, third] : pairs)
    {
        cin >> second;
    }
    for (auto &[first, second, third] : pairs)
    {
        cin >> third;
        first = (double)third / second;
    }
    sort(pairs.rbegin(), pairs.rend());
    long long max_pages = 0;

    for (auto &[first, second, third] : pairs)
    {
        if (x - second >= 0)
        {
            max_pages += third;
            x -= second;
        }
    }
    cout << max_pages << '\n';
}
// using dp

void dpsolve(int n, int x)
{
    vector<int> price(n), pages(n);

    for (int i = 0; i < n; i++)
        cin >> price[i];

    for (int i = 0; i < n; i++)
        cin >> pages[i];

    vector<int> dp(x + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >= price[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
        }
    }

    cout << dp[x];
}

int main()
{
    int n, x;
    cin >> n >> x;
    dpsolve(n, x);
    return 0;
}