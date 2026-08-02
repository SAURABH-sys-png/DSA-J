#include <bits/stdc++.h>

using namespace std;

long long gcd(int a, int b)
{
    return __gcd(a, b);
}

class Solution
{
public:
    long long maxPairStrength(vector<int> &nums)
    {
        int n = nums.size();
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                long long gvf = gcd(nums[i], nums[j]);
                long long a = nums[i] / gvf;
                long long b = nums[j] / gvf;
                long long tg = a * b;
                res = max(res, tg);
            }
        }
        return res;
    }
};
