#include <bits/stdc++.h>

using namespace std;

// integral output

void solve(int t) {
    long long f_num = 1LL << t;

    for (long long i = 0; i < f_num; i++)
    {
        long long g = i ^ (i >> 1);
        
        string s = bitset<16>(g).to_string();
        cout << s.substr(16 - t) << "\n";
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    solve(t);

    return 0;
}