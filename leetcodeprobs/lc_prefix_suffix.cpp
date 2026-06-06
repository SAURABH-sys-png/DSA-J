#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> leftSum;
        vector<int> rightSum;
        int left_sum = 0;
        int right_sum = 0;
        for (int i = 0; i < n; i++)
        {
            leftSum.push_back(left_sum);
            left_sum += nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            
            left_sum -= nums[i];
            rightSum.push_back(left_sum);
            
        }

        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int temp = abs(rightSum[i] - leftSum[i]);
            res.push_back(temp);
        }

        return res;
    }
};