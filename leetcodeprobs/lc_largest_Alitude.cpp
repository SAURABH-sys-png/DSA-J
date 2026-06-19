#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxi = 0;
        int alti = 0;
        for (int i = 0; i < n; i++)
        {
            alti = alti + gain[i];
            maxi = max(alti,maxi);
        }
        return maxi;
    }
};


int main() {
    return 0;
}