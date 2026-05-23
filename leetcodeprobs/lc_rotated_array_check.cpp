#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int st = nums[0];
        int end = nums[nums.size() - 1];
        if (st < end)
        {
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] <  nums[i-1])
                {
                    return false;
                }
            }
        }
        else
        {
            int count = 0;
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] > nums[i + 1])
                {
                    count++;
                }
            }

            if (count > 1)
                return false;
            else
            {
                return true;
            }
        }

        return true;
    }
};

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}