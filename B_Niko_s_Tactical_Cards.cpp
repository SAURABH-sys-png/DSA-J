#include <bits/stdc++.h>
using namespace std;

constexpr long long MOD = 1'000'000'007LL;

void solve()
{
    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<long long> second(n);
    for (int i = 0; i < n; i++)
        cin >> second[i];

    long long a = 0, b = 0, c = 0, d = 0;

    for (int i = 0; i < n; i++)
    {
        long long maxi = max({a, b, c, d});
        long long mini = min({a, b, c, d});

        long long num_a = nums[i];
        long long num_b = second[i];

        a = maxi - num_a;
        b = mini - num_a;
        c = num_b - maxi;
        d = num_b - mini;
    }

    cout << max({a, b, c, d}) << '\n';
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