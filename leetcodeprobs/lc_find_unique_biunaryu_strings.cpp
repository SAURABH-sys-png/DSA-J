#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        int max_len = nums[0].size();
        long long maxi = pow(2, max_len);
        long long mini = 0;

        long long ans = mini;
        vector<long long> numi;
        for (int i = 0; i < nums.size(); i++)
        {
            long long num = stoll(nums[i], nullptr, 2);
            numi.push_back(num);
        }

        sort(numi.begin(), numi.end());
        long long ptr = 0;
        while (ptr < numi.size())
        {
            if (ans == numi[ptr])
            {
                ans++;
                ptr++;
            }
            else{
                break;
            }
        }
        string binary = bitset<16>(ans).to_string().substr(16 - max_len);

        return binary;
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