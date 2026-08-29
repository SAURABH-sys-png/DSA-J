#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string rs(int n){
        vector<pair<char,int>> v = {{'a',0}, {'b',0}, {'c',0},{'d',0}, {'e',0}, {'f',0}, {'g',0}, {'h',0}, {'i',0}, {'j',0}, {'k',0}, {'l',0}, {'m',0}, {'n',0}, {'o',0}, {'p',0}, {'q',0}, {'r',0}, {'s',0}, {'t',0}, {'u',0}, {'v',0}, {'w',0}, {'x',0}, {'y',0}, {'z',0}};
        v[0].second = n;
        for (int i = 1; i < 26; i++)
        {
            int tmp = v[i-1].second;
            v[i].second = tmp/2;
            v[i-1].second = tmp%2;
            if(tmp == 1) break;
        }

        string ans = "";
        for(int i = 25; i >= 0; i--){
            while(v[i].second--){
                ans += v[i].first;
            }
        }
        return ans;
    }
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        for(int x: nums){
            ans.push_back(rs(x));
        }
        return ans;
    }
};

int main(){
    return 0;
}