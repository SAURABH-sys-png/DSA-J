#include <bits/stdc++.h>
using namespace std;


// Input: points = [[10,16],[2,8],[1,6],[7,12]]
// Output: 2
// Explanation: The balloons can be burst by 2 arrows:
// - Shoot an arrow at x = 6, bursting the balloons [2,8] and [1,6].
// - Shoot an arrow at x = 11, bursting the balloons [10,16] and [7,12].

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();

        sort(points.begin(),points.end());
        // 1,6 2,8 7,12 10,16
        // 
        int res = 1;

        
        int st = points[0][0];
        int end = points[0][1];


        // {}

        for(int i = 1;i<n;i++){
            int curr_end = points[i][1];
            int curr_st = points[i][0];

            if(end < curr_st){
                res++;
            }
            else{
                end = min(end,curr_end);
            }
        }
        return res;
    }
};


int main(){
    return 0;
}