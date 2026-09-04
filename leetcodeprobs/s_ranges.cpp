#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<vector<int>> arr;

        int st = nums[0];
        int end = nums[0];
        int prev = nums[0];
        vector<int> tmp;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == prev) continue;
            if(abs(nums[i]-prev) > 1){
                if(end-st == 0){
                    tmp.empty();
                    tmp.push_back(st);
                    st = nums[i];
                    end = nums[i];
                    arr.push_back(tmp);
                }
                else {
                    tmp.empty();
                    tmp.push_back(st);
                    tmp.push_back(end);
                    st = nums[i];
                    end = nums[i];
                    arr.push_back(tmp);
                }
            }
            else {
                prev = nums[i];
            }
        }
        vector<string> res;
        for(int i = 0;i<arr.size();i++){
          string tempo = "";
          if(arr[i].size() == 1) {
            char ch = static_cast<char>(arr[i][0]);
            tempo+=ch;
            res.push_back(tempo);
          }
          if(arr[i].size() == 2){
            char ch = static_cast<char>(arr[i][0]);
            char ch2 = static_cast<char>(arr[i][1]);
            tempo+=ch;
            string arrow = "->";
            tempo+=arrow;
            tempo+=ch2;
            res.push_back(tempo);
          }


              
        }
        return res;
    }
};

int main(){
  return 0;
}
