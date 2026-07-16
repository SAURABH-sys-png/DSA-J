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
    ll gcd(ll a, ll b)
    {
        while (b)
        {
            a %= b;
            swap(a, b);
        }
        return a;
    }
    int gcdOfOddEvenSums(int n)
    {
        ll sumOdd = -1;
        ll sume = 0;
        ll sumEven = 0;
        ll sumo = 0;
        
        for (int i = 0; i < n; i++)
        {
            sumEven+=2;
            sume+=sumEven;
            sumOdd+=2;
            sumo+=sumOdd;
        }
        return gcd(sume, sumo);
    }
};

int main()
{
    Solution sol;
    int n = 4;
    int ans = sol.gcdOfOddEvenSums(n);

    cout << ans << '\n';

    return 0;
}