#include <bits/stdc++.h>

using namespace std;

class Calc
{
public:
    void add(int a,int b){
        cout << a+b << endl;
    }
    void sub(int a,int b){
        cout << abs(a-b) << endl;
    }
    void mul(int a,int b){
        cout << a*b << endl;
    }
    void div(int a,int b){
        
        cout << a/b << endl;
    }
};


int main(){
    Calc cal;
    int a  =90;
    int b = 100;
    cal.add(a,b);
    cal.sub(a,b);
    cal.mul(a,b);
    cal.div(a,b);
}

