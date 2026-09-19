#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;

    int n = t.size();
    char ch = t[n-1];
    if(ch == 'e'){
        t+='r';
    }
    else{
        t+="er";
    }
    cout << t << '\n';
    return 0;
}