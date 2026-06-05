#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int slargest = -1;
        int n = s.size();
        for(int i = 0;i<n;i++){
            char ch = s[i];
            int temp = ch - '0';
            if (temp >= 0 && temp <= 9) {
                if (temp > largest) {
                    slargest = largest;
                    largest = temp;
                } else if (temp > slargest && temp != largest) {
                    slargest = temp;
                }
            }
            

        }
        return slargest;
    }
};

void solve() {
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}