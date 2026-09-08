#include <bits/stdc++.h>
using namespace std;

// Input: intervals = [[1,2],[3,5],[4,8],[6,7],[8,10],[12,16]],
// Output: [[1,2],[3,10],[12,16]]

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
  		vector<vector<int>> res;
  		if(intervals.size()==0){
  			return {};
  		}
  		for(auto& row : newInterval){
  			intervals.push_back(row);
  		}		      
  		sort(intervals.begin(),intervals.end());
  		int st = intervals[0][0];
  		int end = intervals[0][1];
  		int n_idx  =0;
  		for(int i = 1;i<intervals.size();i++){
  			// basically merge all the intervals now
  			int curr_st = intervals[i][0];
  			int curr_end = intervals[i][1];

  			if(end < curr_st){
  				res.push_back({st,end});
  				st = curr_st;
  				end = curr_end;
  			}
  			else if(end >= curr_st){
  				end = max(end,curr_end);
  			}
  		}

  		res.push_back({st,end});

  		return res;

    }
};

int main(){
	return 0;
}