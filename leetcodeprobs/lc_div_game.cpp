#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;
class Solution
{
public:
    static const int MOD = 1000000007;

    int divisibleGame(vector<int> &nums)
    {
        unordered_set<int> divs;

        for (int x : nums)
        {
            for (long long d = 2; d * d <= x; d++)
            {
                if (x % d == 0)
                {
                    divs.insert((int)d);
                    if (d != x / d)
                        divs.insert(x / d);
                }
            }
            if (x > 1)
                divs.insert(x);
        }

        // Handle the case when every element is 1.
        if (divs.empty())
        {
            long long ans = MOD - 1; // (-1) mod MOD
            return (int)(ans * 2 % MOD);
        }

        long long bestScore = LLONG_MIN;
        int bestK = INT_MAX;

        for (int k : divs)
        {
            long long cur = LLONG_MIN;
            long long pref = LLONG_MIN;

            for (int x : nums)
            {
                long long val = (x % k == 0 ? x : -1LL * x);

                if (pref == LLONG_MIN)
                    pref = val;
                else
                    pref = max(val, pref + val);

                cur = max(cur, pref);
            }

            if (cur > bestScore || (cur == bestScore && k < bestK))
            {
                bestScore = cur;
                bestK = k;
            }
        }

        bestScore = ((bestScore % MOD) + MOD) % MOD;
        return (int)(bestScore * bestK % MOD);
    }
};

int main()
{

    return 0;
}