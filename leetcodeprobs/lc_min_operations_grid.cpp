#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>



using namespace std;

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> res;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                res.push_back(grid[i][j]);
            }
        }

        sort(res.begin(),res.end());

        int sizearr = res.size();
        


        for(int k = 0;k<sizearr-1;k++){
            int form = res[k+1]-res[k];
            if(!(form%x == 0)){
                return -1;
            }
        }
        int median;
        if(sizearr%2 == 0){
            median = (res[(sizearr/2)-1] + res[(sizearr/2)])/2;
        }
        else{
            median = res[sizearr/2];
        }

        int dis = 0;

        for(int h = 0;h<sizearr;h++){
            dis = dis + abs(median - res[h]);
        }
        dis = dis/x;

        return dis;
    }
};

int main(){


}