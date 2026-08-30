#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define ll long long
class Solution
{
public:
    ll powcstm(ll a, ll b)
    {
        ll res = 1;
        while (b)
        {
            if (b & 1)
            {
                res = (res * a) % MOD;
            }
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }
    ll dec(ll num)
    {
        int width = num % 10;
        ll di = floor(num / 10);

        string str = to_string(di);
        // first width digits
        string first = str.substr(0, width);
        string second = str.substr(width, str.size() - width);

        ll firstNum = stoll(first);
        ll secondNum = stoll(second);

        ll pw = powcstm(firstNum, secondNum);

        return pw;
    }
    int sumDecoded(vector<ll> &nums)
    {
        ll sum = 0;
        for (ll num : nums)
        {
            sum += dec(num);
        }
        int res = sum % MOD;
        return res;
    }
};
int main()
{
    return 0;
}