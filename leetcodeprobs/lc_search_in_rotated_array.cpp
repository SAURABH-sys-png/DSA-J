#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        if (nums[0] <= nums[n - 1])
        {
            // do binary search
            int low = 0, high = n - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target){
                    return mid;
                }
                else if (nums[mid] < target){
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        else{
            // do linear search
            for (int i = 0; i < n; i++){
                if (nums[i] == target)
                    return i;
            }
        }

        return -1;
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