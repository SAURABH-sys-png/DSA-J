#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int indiCnt(const vector<int> &arr)
    {
        int m = arr.size();
        if (m <= 1)
            return 0;

        vector<int> pref(m), suff(m);
        pref[0] = arr[0];
        for (int i = 1; i < m; ++i)
        {
            pref[i] = gcd(pref[i - 1], arr[i]);
        }

        suff[m - 1] =  arr[m - 1];
        for (int i = m - 2; i >= 0; --i)
        {
            suff[i] = gcd(suff[i + 1], arr[i]);
        }

        int spl = 0;
        for (int i = 0; i < m - 1; ++i)
        {
            if (pref[i] == suff[i + 1])
            {
                spl++;
            }
        }

        return spl;
    }

    int maxValidSplits(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 1)
            return 0;

        int ans = indiCnt(nums);

        for (int i = 0; i < n; ++i)
        {
            vector<int> arr;
            arr.reserve(n - 1);
            for (int j = 0; j < n; ++j)
            {
                if (i != j)
                {
                    arr.push_back(nums[j]);
                }
            }
            ans = max(ans, indiCnt(arr));
        }

        return ans;
    }
};