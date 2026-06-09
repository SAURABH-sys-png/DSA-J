#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:
    long long maxTotalValue(vector<int> &nums, int k)
    {
        int n = nums.size();
        int maxi = -1;
        int mini = 1e9;
        for(int i : nums){
            maxi = max(maxi,i);
            mini =  min(i,mini);

        }

        long long num = maxi-mini;
        long long ans = num*k;
        return ans;

    }
};

int main()
{
    vector<int> nums = {183237127,923422333,234234223,234233425};
    Solution s;
    ll ans = s.maxTotalValue(nums,78);
    cout << ans << "\n";
    return 0;
}