#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = 100000;
        for(int i = 0;i < nums.size();i++){
            int sum = 0;
            while(nums[i] > 0){
                int rem = nums[i]%10;
                sum = sum + rem;
                nums[i] = nums[i]/10;
            }
            mini = min(mini,sum);
        }

        return mini;
    }
};

void solve() {
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}