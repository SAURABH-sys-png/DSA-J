#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        // type 1;
        int ptr1 = 0;
        int ptr2 = height.size() - 1;

        int res = 0;

        while (ptr1 < ptr2)
        {
            int width = ptr2 - ptr1;
            int tmp = min(height[ptr1], height[ptr2]);
            int area = width * tmp;
            res = max(res, area);

            if (height[ptr1] < height[ptr2])
            {
                ptr1++;
            }

            else
            {
                ptr2--;
            }
        }

        return res;
    }
};