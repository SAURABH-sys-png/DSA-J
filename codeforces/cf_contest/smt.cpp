#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            int pp = ch;
            pp-=96;
            pp = 26-pp +1;
            sum+=(pp*i);
        }

        return sum;
    }
};

int main (){
    return 0;
}