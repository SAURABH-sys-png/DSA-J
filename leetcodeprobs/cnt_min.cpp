#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;

        for(int i = 0;i<n;i++){
          mp[nums[i]].push_back(i);
        }
        
        int cnt = 0;
        for(const auto& [key,arr] : mp){
          if(arr.size() ==3){
            if(arr[2]-arr[1] == arr[2] - arr[1]){
              cnt++;
            }
          }
        }

        return cnt;
    }
};

int main(){
  return 0;
}
