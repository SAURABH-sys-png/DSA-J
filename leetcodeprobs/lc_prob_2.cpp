#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution
{
private:
    long long maxSum(vector<long long> &arr)
    {
        if (arr.empty())
            return 0;
        long long maxi = arr[0];
        long long curr_max = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            curr_max = max(arr[i], curr_max + arr[i]);
            maxi = max(maxi, curr_max);
        }
        return maxi;
    }

public:
    long long maxSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        vector<long long> mnums(n);
        vector<long long> dnums(n);

        for (int i = 0; i < n; i++)
        {

            mnums[i] = 1LL * nums[i] * k;

            if (nums[i] >= 0)
            {
                dnums[i] = floor((double)nums[i] / k);
            }
            else
            {
                dnums[i] = ceil((double)nums[i] / k);
            }
        }

        long long sumP = maxSum(mnums);
        long long sumD = maxSum(dnums);

        return max(sumD, sumP);
    }
};

int main()
{

    return 0;
}