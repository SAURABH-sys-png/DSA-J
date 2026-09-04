#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=  nums.size();

        unordered_map<int,vector<int>> mp;
        
        for(int i = 0;i<n;i++){
          mp[nums[i]].push_back(i);
        }

        for(const auto& [key,arr]:mp){
            if(arr.size() == 1) continue;
            for(int j = 0;j<arr.size();j++){
                for(int l = j; l< arr.size();l++){
                    if(abs(arr[l]-arr[j]) <= k) return true;
                }
            }
        }
        return false;

    }
};
int main(){
  return 0;
}
