#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool hasUniqueSubarray(int len, const vector<int> &arr)
    {
        int n = arr.size();
        if (len > n)
            return false;

        unsigned long long base = 13331;
        unsigned long long hash_val = 0;
        unsigned long long power = 1;

        for (int i = 0; i < len; ++i)
        {
            hash_val = hash_val * base + arr[i];
            if (i > 0)
                power *= base;
        }

        unordered_map<unsigned long long, int> counts;
        counts[hash_val]++;

        for (int i = len; i < n; ++i)
        {
            hash_val = (hash_val - arr[i - len] * power) * base + arr[i];
            counts[hash_val]++;
        }

        for (const auto &pair : counts)
        {
            if (pair.second == 1)
            {
                return true;
            }
        }
        return false;
    }
    int smallestUniqueSubarray(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; ++i)
        {
            mp[nums[i]].push_back(i);
        }

        for (const auto &pair : mp)
        {
            if (pair.second.size() == 1)
            {
                return 1;
            }
        }

        int low = 2, high = n, ans = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (hasUniqueSubarray(mid, nums))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};


    void
    solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}