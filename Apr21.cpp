#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;



int main(){
    int t;
    cin >> t;
    for(int v = 0;v < t;v++){
        long long x;
        long long y;
        cin >> x;
        cin >> y;
        long long div = y/x;
        //
        int i = 2;
        int flag = true;
        while (flag)
        {
            long long num = x*i;
            if ((num<y) && !(y%num == 0))
            {
                
                cout << "YES" << endl;   
                flag= false;
            }
            else if(num == y){
                
                cout << "NO" << endl;
                flag = false;
            }
            else if (i == div)
            {
                flag = false;
            }
            else{
                i++;
            }
            
            
        }

        
        
        
        
        
    }
    return 0;
}