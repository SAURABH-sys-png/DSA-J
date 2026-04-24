#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void solve() {
    // Store as pairs to keep track of which char is which after sorting
    vector<pair<int, char>> v(3);
    cin >> v[0].first >> v[1].first >> v[2].first;
    v[0].second = 'R'; v[1].second = 'G'; v[2].second = 'B';

    // Sort descending by count
    sort(v.rbegin(), v.rend());

    string res = "";
    int c1 = v[0].first, c2 = v[1].first, c3 = v[2].first;
    char char1 = v[0].second, char2 = v[1].second, char3 = v[2].second;

    // We can use char1 at most (c2 + c3 + 1) times to keep it separated
    int use1 = min(c1, c2 + c3 + 1);

    for (int i = 0; i < use1 + c2 + c3; ++i) {
        if (i % 2 == 0) {
            if (use1 > 0) {
                res += char1;
                use1--;
            }
        } else {
            if (c2 > 0) {
                res += char2;
                c2--;
            } else if (c3 > 0) {
                res += char3;
                c3--;
            }
        }
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}