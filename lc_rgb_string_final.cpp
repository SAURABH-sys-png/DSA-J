#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int r, g, b;
    if (!(cin >> r >> g >> b)) return;
    int counts[3] = {r, g, b};
    char chars[3] = {'R', 'G', 'B'};
    
    string res = "";
    res.reserve(r + g + b);

    while (true) {
        int best = -1;
        for (int i = 0; i < 3; ++i) {
            if (counts[i] <= 0) continue;
            if (!res.empty() && chars[i] == res.back()) continue;
            if (res.size() >= 3 && chars[i] == res[res.size() - 3]) continue;

            if (best == -1 || counts[i] > counts[best]) {
                best = i;
            } else if (counts[i] == counts[best]) {
                if (res.size() >= 2 && chars[i] == res[res.size() - 2]) {
                    best = i;
                }
            }
        }

        if (best == -1) break;
        res += chars[best];
        counts[best]--;
    }
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
