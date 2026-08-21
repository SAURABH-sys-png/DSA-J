#include <bits/stdc++.h>

using namespace std;

// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &nums)
//     {

//         sort(nums.begin(), nums.end());
//         nums.erase(unique(nums.begin(), nums.end()), nums.end());
//         int n = nums.size();
//         vector<vector<int>> res;

//         for (int i = 0; i < n; i++)
//         {
//             int num = nums[i];
//             int left = i + 1;
//             int right = n - 1;
//             while (left < right)
//             {
//                 int num_left = nums[left];
//                 int num_right = nums[right];
//                 int sum = num_left + num + num_right;

//                 if (sum == 0)
//                 {
//                     res.push_back({num, num_right, num_left});
//                     left++;
//                     right--;
//                 }
//                 else if (sum > 0)
//                     right--;
//                 else
//                     left++;
//             }
//         }

//         return res;
//     }
// };
