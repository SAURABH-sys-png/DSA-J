#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minimumSwaps(vector<int> &nums)
    {
        // we have to swap nums
        int n = nums.size();

        int no_of_zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                no_of_zeroes++;
            }
            // this counts the no of zeroes
        }

        if (n = no_of_zeroes)
            return 0;

        int no_of_zeroes_back = 0;
        for (int j = n - 1; j > no_of_zeroes; j--)
        {
            if (nums[j] == 0)
            {
                no_of_zeroes_back++;
            }
        }
        return (no_of_zeroes - no_of_zeroes_back);
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