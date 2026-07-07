#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0)
        {
            return 0;
        }
        
        long long sum = 0;
        string x1 = to_string(n);
        string num = "";
        for(char c : x1){
            if (c!='0')
            {
                num.push_back(c);
            }
            
        }

        long long x = stol(num);
        while(n>0){
            int digit = n%10;
            if(digit != 0){
                sum+=digit;
            }
            n = n/10;
        }

        return (x*sum);
    }
};

int main() {
    int n;
    cout << "Pls enter a num" << endl;
    cin >> n;
    Solution sol;
    cout << sol.sumAndMultiply(n) << endl;
    return 0;
}