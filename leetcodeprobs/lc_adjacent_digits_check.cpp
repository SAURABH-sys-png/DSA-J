#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAdjacentDiffAtMostTwo(string s)
    {
        int n = s.size();
        for (int i = 0; i < n - 1; i++)
        {
            char ch = s[i];
            char ch1 = s[i + 1];
            int num1 = ch - '0';
            int num2 = ch1 - '0';

            int diff = abs(num1 - num2);
            if (diff > 2)
                return false;
        }
        return true;
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