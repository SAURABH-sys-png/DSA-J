#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:

    bool hasZero(int n){

        while(n != 0){
            if(n%10 == 0){
                return false;
            }
            n = n/10;

        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {

        vector<int> res;
        int a = 1;
        int b = n-1;
        for(int i = 1;i<n;i++){
            a = i;
            b = n-a;
            if(hasZero(a) && hasZero(b)){
                res.push_back(a);
                res.push_back(b);

                return res;
            }
        }
        return res;
    }
};

int main (){


}