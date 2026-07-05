#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve(vector<int> nums)
{
    // Task is to find the the maximum sub array summ

    // using kadanes algortithm

    int curr_sum = 0;
    int maxi = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int temp_sum = curr_sum + nums[i];
        if (temp_sum >= 0)
        {
            curr_sum = temp_sum;
            maxi = max(maxi, curr_sum);
        }
        else
        {
            curr_sum = 0;
        }
    }

    cout << maxi << '\n';
}

void solve2(vector<int> array)
{
    int n = array.size();
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    cout << best << "\n";
}

int main()
{
    vector<int> nums = {2, 5, -1, 8, -1, 3, -1, 3, 4, 53};
    solve(nums);
    solve2(nums);

    return 0;
}