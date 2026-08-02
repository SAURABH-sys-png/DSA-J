#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countRatioSubarrays(vector<int> &nums, int a, int b)
    {
        int n = nums.size();
        // freq[i] stores counts for first i elements
        vector<pair<int, int>> freq(n + 1, {0, 0});
        for (int i = 0; i < n; i++)
        {
            freq[i + 1] = freq[i];
            if (nums[i] & 1)
                freq[i + 1].second++;
            else
                freq[i + 1].first++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int even = freq[j + 1].first - freq[i].first;
                int odd = freq[j + 1].second - freq[i].second;
                if (odd > 0 && 1LL * even * b <= 1LL * odd * a)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
class Solution
{
public:
    long long countRatioSubarrays(vector<int> &nums, int a, int b)
    {
        int n = nums.size();
        // freq[i] stores counts for first i elements
        vector<pair<int, int>> freq(n + 1, {0, 0});
        for (int i = 0; i < n; i++)
        {
            freq[i + 1] = freq[i];
            if (nums[i] & 1)
                freq[i + 1].second++;
            else
                freq[i + 1].first++;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int even = freq[j + 1].first - freq[i].first;
                int odd = freq[j + 1].second - freq[i].second;
                if (odd > 0 && 1LL * even * b <= 1LL * odd * a)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
int main()
{
}