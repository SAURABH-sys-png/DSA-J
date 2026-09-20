#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        
        int res = 0;
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(intervals[i][1]>=intervals[j][0]) res++;
            }
        }

        return res;
    }
};
int main(){
    return 0;
}