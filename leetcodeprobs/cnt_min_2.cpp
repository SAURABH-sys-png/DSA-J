#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        bool flag = false;
        int cnt = 0;
        for (const auto& [key, arr] : mp) {
            if (arr.size() >= 3) {
                for (int i = 2; i < arr.size(); i++) {
                    if (arr[i] - arr[i - 1] == arr[i - 1] - arr[i - 2]) {
                        bool flag = true;
                    }
                    else {
                        flag = false;
                        break;
                }
                if (flag) {
                    cnt++;
                }
            }
        }}

        return cnt;
    }
};

int main(){
    return 0;
}