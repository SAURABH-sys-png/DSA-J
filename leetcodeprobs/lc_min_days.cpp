#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int res = 0;
    // recursive function to find the number of days
    int days(int &num){
        // n*(n+1)/2 = target
       
        // increment n unitl it reaches the target or is just less than
        int n = 1;
        while(true){
            int sum = n*(n+1)/2;
            if(sum == num){
                res = n;
                return res;
            }
            else if(sum > num){
                res = n-1;
                int new_num = num - (res*(res+1)/2);
                return (res + days(new_num));
            }
            n++;
        }

    }
    int minDays(int n) {
        return days(n)+1;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    return 0;
}