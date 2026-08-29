#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        
        // badc
        // baba

        for(int i = 0;i< s.size();i++){
            char sch = s[i];
            char tch = t[i];
            if(sch==tch) continue;
            if(mp.find(sch)!=mp.end()){
                if(tch!=mp[sch]){
                    return false;
                }
            }
            mp[sch] = tch;
        }

        return true;
    }
};

int main(){
    return 0;
}