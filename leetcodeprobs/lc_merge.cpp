#include <bits/stdc++.h>
using namespace std;

// [[1,3],[2,6],[8,10],[15,18]]
// [[1,6],[8,10],[15,18]]

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        
        int st  = intervals[0][0];
        int end = intervals[0][1];

        for(int i = 1;i<intervals.size();i++){
            int curr_st = intervals[i][0];
            int curr_end = intervals[i][1];

            if(end >= curr_st){
                end = curr_end;
                continue;
            }
            if(end < curr_end){
                vector<int>tm;
                tm = {st,end};
                res.push_back(tm);
                st = curr_st;
                end = curr_end;
            }
        }

        vector<int> tmp = {st,end};
        res.push_back(tmp);
        return res;
    }
};
int main(){
    return 0;
}