#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>


using namespace std;

class Solution {
public:
    int longestBalanced(string s) {
        int result = 0;
        int count0 = 0;
        int count1 = 0;
        bool is1less;
        bool is0less;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        int mini = std::min(count0, count1);
        if(s.size() == 1)return 0;
        if (mini == 0){
            return 0;
        } 
        int maxlen = mini*2;

        if(count0<count1){
            is0less = true;
        }
        else{
            is1less = true;
        }

        for (int i = 0; i < maxlen; i++)
        {
            
        }
        

        
        
    }
};

int main() {
    
}