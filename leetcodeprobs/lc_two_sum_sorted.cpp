#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> res;
        int n = numbers.size();

        int leftptr = 0;
        int rightptr = n - 1;

        while (leftptr < rightptr)
        {
            int sum = numbers[leftptr] + numbers[rightptr];
            if (sum > target)
            {
                rightptr--;
            }
            else if (sum < target)
            {
                leftptr++;
            }
            else
            {
                res.push_back(leftptr + 1);
                res.push_back(rightptr + 1);
                break;
            }
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Solution ds;

    vector<int> res = ds.twoSum(nums, 9);

    for (int i = 0; i < 2; i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}