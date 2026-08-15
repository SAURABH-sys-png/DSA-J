#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int n = requests.size();
        int prev = 0;
        int res = 0;
        for(auto x:requests){
            res+=abs(prev-x);
        }
        return res;
    }
};
int main(){

}