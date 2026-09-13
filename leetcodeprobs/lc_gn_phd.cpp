#include <bits/stdc++.h>
using namespace std;


#define ll long long
class Solution
{
public:
    ll mkp(ll prefix, int len)
    {
        string s = to_string(prefix);
        string t = s;
        int st = (len % 2) ? s.size() - 2 : s.size() - 1;

        for (int i = st; i >= 0; i--)
            t += s[i];

        return stoll(t);
    }
    long long minOperations(vector<int> &nums)
    {
        long long ans = 0;

        for (long long x : nums)
        {
            string s = to_string(x);
            int len = s.size();

            int half = (len + 1) / 2;

            long long prefix = stoll(s.substr(0, half));

            long long best = LLONG_MAX;

            for (long long d = -2; d <= 2; d++)
            {
                long long p = prefix + d;

                if (p <= 0)
                    continue;

                long long pal = mkp(p, len);

                if (pal <= 0 || pal > 1000000000LL)
                    continue;

                if ((pal & 1) != (x & 1))
                    continue;

                best = min(best, llabs(x - pal));
            }

            ans += best / 2;
        }

        return ans;
    }
};

int main()
{
    return 0;
}