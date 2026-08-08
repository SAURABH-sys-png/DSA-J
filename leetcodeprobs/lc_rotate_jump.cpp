#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int idx = 0;
        int t_gas = 0;
        
        for(int i = 0;i<n;i++){
            t_gas = t_gas + gas[i] - cost[i];

            if(t_gas < 0){
                idx++;
                t_gas = 0;
            }
        }

        for(int i = 0;i<n;i++){
            int id = (i+idx)%n;
            // 1,2,3,4,5 -> 3,4,5,1,2
            t_gas = t_gas + gas[id] - cost[id];
            if(t_gas < 0) return -1;
        }
        return idx;
    }
};
int main(){

}