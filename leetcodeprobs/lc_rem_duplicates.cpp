#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int ocurss = 1;
        int idx = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                ocurss++;
                if (ocurss <= 2)
                {
                    nums[idx] = nums[i];
                    idx++;
                }
            }
            else if (nums[i] != nums[i - 1])
            {
                ocurss = 1;
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int res = sol.removeDuplicates(nums);
    cout << res << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "  " << endl;
    }
    
    return 0;
}