#include <bits/stdc++.h>
using namespace std;

// Precompute cost[i] = moves to reduce i->0 (if odd: i--, if even: i/=2)
static const int MAXA = 100000;  // max ai per problem
int cost[MAXA+1], best[MAXA+2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Compute cost DP
    cost[0] = 0;
    for(int i = 1; i <= MAXA; i++) {
        if(i & 1) cost[i] = cost[i-1] + 1;
        else      cost[i] = cost[i/2] + 1;
    }
    // Compute best suffix: best[i] = min_{j >= i}(cost[j] + j)
    best[MAXA] = cost[MAXA] + MAXA;
    for(int i = MAXA-1; i >= 0; i--) {
        best[i] = min(best[i+1], cost[i] + i);
    }

    int T; 
    cin >> T;
    while(T--) {
        int n; 
        cin >> n;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            int x; 
            cin >> x;
            // If x == 0, best[0] = cost[0]+0 = 0, so safe
            ans += (long long)(best[x] - x);
        }
        cout << ans << "\n";
    }
    return 0;
}
