#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<int> starts;
        starts.reserve(n);

        for (const auto& interval : intervals) {
            starts.push_back(interval[0]);
        }

        long long res = 0;
        for (int i = 0; i < n; ++i) {
            int count = upper_bound(starts.begin(), starts.end(), intervals[i][1]) - starts.begin();
            res += count - i - 1;
        }

        return res;


    }
};


int main(){
    return 0;
}