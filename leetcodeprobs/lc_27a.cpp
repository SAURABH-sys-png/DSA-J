#include <bits/stdc++.h>
using namespace std;


#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
        std::map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        
        std::vector<int> res;
        res.reserve(nums.size());
        
        int rm = nums.size();
        while (rm > 0) {
            for (auto& [val, count] : counts) {
                if (count > 0) {
                    res.push_back(val);
                    count--;
                    rm--;
                }
            }
        }
        
        return res;
    }
};