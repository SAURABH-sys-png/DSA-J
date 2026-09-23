#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int arrSum = 0;

        for (auto x : nums)
        {
            arrSum += x;
        }

        int newSum = arrSum - x;

        // n*n
        // 10 power 5 time 10 power 5
        int ptr1 = 0;
        int ptr2 = 0;

        int curr = 0;

        int resm = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            curr += nums[i];
            if (curr >= arrSum)
            {
                ptr2 = i;
                while (curr > arrSum && ptr1 < ptr2)
                {
                    curr -= nums[ptr1];

                    ++ptr1;
                }

                if (curr == arrSum)
                {
                    int len = ptr2 - ptr1 + 1;
                    resm = max(resm, len);
                }
            }
        }

        return (nums.size() - resm);
    }
};
int main()
{
    return 0;
}