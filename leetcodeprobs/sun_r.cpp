#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      int n = nums.size();
      vector<string> res;
      if(nums.empty()) return {};

      int st = nums[0];
      int end = nums[0];
      int prev = nums[0];

      for(int i = 1;i< n;i++){
        // fix the unsigned overflow if int
        if((long long)nums[i] - (long long)prev > 1){
          if(st == end){
            //if num is -ve
            string ch = to_string(st);
            string tmp = "";
            tmp += ch;
            res.push_back(tmp);
            prev = nums[i];
            st = nums[i];
            end = nums[i];
          }
          else {
            string a = to_string(st);
            string b = to_string(end);
            string tmp = "";
            tmp +=a;
            tmp +="->";
            tmp +=b;
            res.push_back(tmp);
            st = nums[i];
            end =nums[i];
            prev = nums[i];
          }
        }
        end = nums[i];
        prev = nums[i];
        
      } 
      if(st==end){
        string ch = to_string(st);
        string tmp = "";
        tmp += ch;
        res.push_back(tmp);
      }
      else {
        string a = to_string(st);
        string b = to_string(end);
        string tmp = "";
            tmp +=a;
            tmp +="->";
            tmp +=b;
        res.push_back(tmp);
      }
      return res;

    }
};



int main(){
  return 0;
}
