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
    int countValidSubarrays(vector<int> &nums, int x)
    {
        int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long sum = 0;

            for (int j = i; j < n; j++)
            {
                sum += nums[j];

                if (sum % 10 != x)
                    continue;

                long long t = sum;

                while (t >= 10)
                    t /= 10;

                if (t == x)
                    ans++;
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}