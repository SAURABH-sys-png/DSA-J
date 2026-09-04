#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        // 1
        // 7
        // 10

      while (n >10) {
        int tmp = 0;
        while(n>0){
          int x = n%10;
          n = n/10;
          tmp+=(x*x);
        }
        n = tmp;
      }

      if(n == 1 || n==7){
        return true;
      }
      return false;
    }
};
int main(){
  return 0;
}
