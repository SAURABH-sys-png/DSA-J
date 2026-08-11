#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        // 49 -> IL
        // XLMVIV
        //

        unordered_map<char, int> nums;

        nums['I'] = 1;
        nums['V'] = 5;
        nums['X'] = 10;
        nums['L'] = 50;
        nums['C'] = 100;
        nums['D'] = 500;
        nums['M'] = 1000;

        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n - 1; i++)
        {
            int num = nums[s[i]];
            int nxt_num = nums[s[i + 1]];

            if (num > nxt_num)
                ans += num;
            else
                ans -= num;
        }

        ans += nums[s[n - 1]];
        return ans;
    }
};

int main()
{
    return 0;
}