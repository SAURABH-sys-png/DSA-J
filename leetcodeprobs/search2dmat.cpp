#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {

        int n = nums.size();
        int beg = 0;
        int end = n - 1;
        int mid;

        while (beg <= end)
        {
            mid = (beg + end) / 2;
            if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else if (nums[mid] < target)
            {
                beg = mid + 1;
            }
            else if (nums[mid] == target)
            {
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] <= target && matrix[i][matrix[0].size()-1] >= target)
            {
                return search(matrix[i],target);
            }
            
        }
        return false;
        
    }
};

int main()
{
    vector<vector<int>> res = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    Solution dst;
    bool pow = dst.searchMatrix(res, 10);
    cout << endl;
    cout << pow << endl;
    return 0;
}