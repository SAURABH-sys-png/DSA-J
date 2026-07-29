#include <bits/stdc++.h>

using namespace std;

// class Solution
// {
// public:
//     int removeDuplicates(vector<int> &nums)
//     {
//         // o(n) ,o(1)
//         int n = nums.size();
//         int m = 1;
//         for (size_t i = 1; i < n; i++)
//         {
//             if (nums[i] != nums[i - 1])
//             {
//                 nums[m] = nums[i];
//                 m++;
//             }
//         }
//         return m;
//     }
// };


class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
int main()
{
    return 0;
}