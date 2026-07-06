#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;

bool  comp(string a,string b){
    if (a.size() != b.size())
    {
        return a.size() > b.size();
    }
    else {
        return a>b;
    }
    
}

int main() {
    string nums1 = "Saurabh";
    string nums2 = "Kuldeepa";
    vector<string> v= {nums1,nums2,"AKJSHDKAJSHDKJAH","Rav","Helllo"};
    sort(v.begin(),v.end(),comp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
    

    return 0;
}