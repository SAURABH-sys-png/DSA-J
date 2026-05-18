#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countKthRoots(int l, int r, int k)
    {
        if (k == 1)
            return r - l + 1;

        int res = 0;

        int st = ceil(pow(l, 1.0 / k) - 1e-9);
        int end = floor(pow(r, 1.0 / k) + 1e-9);

        if (st <= end)
        {
            res = end - st + 1;
        }

        return res;
    }
};

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}