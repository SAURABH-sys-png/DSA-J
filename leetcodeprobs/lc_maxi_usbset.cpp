#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<long long, int> val_freq;
        for (int num : nums) {
            val_freq[num]++;
        }

        int ans = 1;

        if (val_freq.count(1)) {
            int count1 = val_freq[1];
            if (count1 % 2 == 0) {
                ans = max(ans, count1 - 1);
            } else {
                ans = max(ans, count1);
            }
        }

        long long max_val = 0;
        if (!nums.empty()) {
            max_val = *max_element(nums.begin(), nums.end());
        }

        for (const auto &[key, val] : val_freq) {
            if (key == 1) continue;

            long long curr_val = key;
            int curr_size = 0;

            while (val_freq.count(curr_val) && val_freq[curr_val] >= 2) {
                curr_size += 2;
                
                if (curr_val > max_val / curr_val) {
                    curr_val = max_val + 1; 
                    break;
                }
                curr_val = curr_val * curr_val;
            }

            if (val_freq.count(curr_val) && val_freq[curr_val] >= 1) {
                curr_size += 1;
            } else {
                curr_size -= 1;
            }

            ans = max(ans, curr_size);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums_1 = {5, 4, 1, 2, 2};
    vector<int> nums_2 = {1, 3, 2, 4};

    Solution sol;

    int ans = sol.maximumLength(nums_1);
    int ans2 = sol.maximumLength(nums_2);

    cout << ans << ans2 << endl;
    return 0;
}