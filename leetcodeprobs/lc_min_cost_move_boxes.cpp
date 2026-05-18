#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<long long> getBackwardPrefixSums(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> backward(n, 0);

        for (int i = n - 1; i > 0; i--)
        {
            int cost;

            if (i == n - 1)
            {
                cost = 1;
            }
            else
            {
                long long diffToPrev = abs(nums[i] - nums[i - 1]);
                long long diffToNext = abs(nums[i] - nums[i + 1]);

                if (diffToPrev <= diffToNext)
                {
                    cost = 1;
                }
                else
                {
                    cost = diffToPrev;
                }
            }
            backward[i - 1] = backward[i] + cost;
        }
        return backward;
    }
    vector<long long> getForwardPrefixSums(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> forward(n, 0);

        for (int i = 0; i < n - 1; i++)
        {
            int cost;
            // At index 0, only index 1 is adjacent, so it is automatically closest
            if (i == 0)
            {
                cost = 1;
            }
            else
            {
                long long diffToNext = abs(nums[i] - nums[i + 1]);
                long long diffToPrev = abs(nums[i] - nums[i - 1]);

                if (diffToNext < diffToPrev)
                {
                    cost = 1;
                }
                else
                {
                    cost = diffToNext;
                }
            }
            forward[i + 1] = forward[i] + cost;
        }
        return forward;
    }
    int nearestIndex(vector<int> &nums, int cur)
    { // o1 me kaam karega ye

        
        int n = nums.size();
        if (cur == 0)
        {
            return 1;
        }
        else if (cur == n - 1)
        {
            return n - 2;
        }
        else
        {
            if (abs(nums[cur - 1] - nums[cur]) > abs(nums[cur + 1] - nums[cur]))
            {
                return (cur + 1);
            }
            else if (abs(nums[cur - 1] - nums[cur]) < abs(nums[cur + 1] - nums[cur]))
            {
                return (cur - 1);
            }
            else
            {
                return (cur - 1);
            }
        }
    }
    vector<int> minCost(vector<int> &nums, vector<vector<int>> &queries)
    {
        bool flag = false; // base condition is to iterate right but if condi then to left
        vector<long long> leftsums = getBackwardPrefixSums(nums);
        vector<long long> rightsums = getForwardPrefixSums(nums);

        int number_of_queries = queries.size();
        int i = 0;
        vector<int> res;

        while (number_of_queries--)
        {
            if (queries[i][0] > queries[i][1])
                flag = true;
            int l = queries[i][0];
            int r = queries[i][1];
            long long sumdis = 0;

            if (flag)
            { // condition for left iteration
                sumdis = leftsums[r] - leftsums[l];
            }
            else
            { // condit for right
                sumdis = rightsums[r] - rightsums[l];
            }

            res.push_back(sumdis);
            i++;
            flag = false;
        }

        return res;
    }
};