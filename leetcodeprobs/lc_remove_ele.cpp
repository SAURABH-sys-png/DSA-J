#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        // 2 3 4 5 7 4 6 4
        // val = 4
        // 2 3 5 7 6
        int i = 0;
        for (size_t j = 0; j < nums.size(); j++)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
int main()
{
}