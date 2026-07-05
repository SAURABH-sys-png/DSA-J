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
    int range(int num)
    {
        if (num == 0)
            return 0;
        int lr = 0;
        int mi = 10;
        while (num > 0)
        {
            int rem = num % 10;
            num = num / 10;
            lr = max(lr, rem);
            mi = min(mi, rem);
        }
        return lr - mi;
    }
    int maxDigitRange(vector<int> &nums)
    {
        int res = 0;
        int n = nums.size();
        vector<pair<int, int>> rang(n);

        for (int i = 0; i < n; i++)
        {
            int diff = range(nums[i]);
            rang[i].first = diff;
            rang[i].second = i;
        }

        sort(rang.begin(), rang.end());

        int diff_largest = rang[n - 1].first;
        for (int i = n - 1; i >= 0 && rang[i].first == diff_largest; i--)
        {
            res += nums[rang[i].second];
        }
        return res;
    }
};

int main()
{

    return 0;
}