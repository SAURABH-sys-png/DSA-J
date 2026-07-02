#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;

class Solution {
public:

    bool valid(int n){
        return (n & (n >> 1)) == 0;
    }

    int findIntegers(int n) {
        int count = 0;
        for (int i = 0; i <= n; i++) {
            if (valid(i)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    cout << sol.findIntegers(n) << endl;
    return 0;
}