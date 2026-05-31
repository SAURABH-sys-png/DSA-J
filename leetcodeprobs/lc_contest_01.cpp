#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
       unordered_map<int,int> freq_table;
       
       while (n > 0)
       {
            
            int rem = n%10;
            freq_table[rem]++;
            n = n/10;
       }
       int prd = 0;

       for (const auto&[key,freq] : freq_table)
       {
            prd = prd + (key*freq);
       }

       return prd;
       
       
    }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    Solution s;
    cout << s.digitFrequencyScore(122) << "\n";
    

    return 0;
}