#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int fd(vector<int> &nums, const int &idx, const int &m)
{
    int n = nums.size();
    if (idx == 0)
    {
        if (nums[idx + 1] > 1 && nums[idx + 1] < m)
        {
            return 3;
        }
        else if (nums[idx + 1] == 1)
        {
            return 2;
        }
    }
    else if(idx == n - 1)
    {
        if (nums[idx - 1] > 1 && nums[idx - 1] < m)
        {
            return 3;
        }
        else if (nums[idx - 1] == 1)
        {
            return 2;
        }
    }
    else
    {
        if(abs(nums[idx-1]-nums[idx+1]) == 1)
        {
            return 2;
        }
        else if (abs(nums[idx-1]-nums[idx+1]) == 2)
        {
            return 1;
        }
        else{
            if(nums[idx-1] > 1 && nums[idx-1] < m)
            {
                return 3;
            }
            else if (nums[idx-1] == 1 || nums[idx+1] == m)
            {
                return 2;
            }
        }
    }
    return 0;
}

int main()
{
    fastio;

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> not_f;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            not_f.push_back(i);
        }
    }
    int MOD = 1e9 + 7;
    long long ans = 1;
    for (size_t i = 0; i < not_f.size(); i++)
    {
        ans *= fd(arr, not_f[i], m);
        ans %= MOD;
    }

    cout << ans << '\n';

    return 0;
}