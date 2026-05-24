#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> res;
        for(int i = 0;i<n;i++){
            res[nums[i]]++;
        }
        vector<int> result;
        for(const auto&key : res){
            int keyed = key.first;
            int freq = key.second;

            int mini = min(freq,k);
            for(int k = 0;k<mini;k++){
                result.push_back(keyed);
            }
        }

        return result;
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