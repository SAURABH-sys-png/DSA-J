#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums){
                mp[x]++;
        }
        // O(n+logn + m*logm)
        int max_ele = 0;
        int max_feq = 0;
        for(auto x: mp){
                if(x.second>max_feq){
                        max_ele = x.first;
                }
        }

        return max_ele;
    }
};

int main(){
	return 0;
}
