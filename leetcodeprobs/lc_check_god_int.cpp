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
    bool checkGoodInteger(int n)
    {
        int digiSUm = 0;
        int sqSum = 0;
        int temp = n;

        while (temp > 0)
        {
            int rem = temp % 10;
            temp = temp / 10;
            digiSUm = digiSUm + rem;
            sqSum = sqSum + (rem * rem);
        }

        if (sqSum - digiSUm >= 50)
        {
            return true;
        }
        else
        {
            return false;
        }
        return false;
    }
};

void solve()
{
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}