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
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> left, right;
        int count_pivot = 0;
        for (int num : nums)
        {
            if (num < pivot)
            {
                left.push_back(num);
            }
            else if (num > pivot)
            {
                right.push_back(num);
            }
            else
            {
                count_pivot++;
            }
        }

        vector<int> result;
        result.insert(result.end(), left.begin(), left.end());
        result.insert(result.end(), count_pivot, pivot);
        result.insert(result.end(), right.begin(), right.end());
        return result;
    }
};

int main()
{
    fastio;

    return 0;
}