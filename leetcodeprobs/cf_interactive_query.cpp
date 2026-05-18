#include <iostream>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;


    auto ask = [](int u, int v) {
        cout << "? " << u << " " << v << endl;
        int res;
        cin >> res;
        return res == 1;
    };

    if (ask(1, 2)) { cout << "! 1" << endl; return; }
    if (ask(2, 3)) { cout << "! 2" << endl; return; }
    if (ask(1, 3)) { cout << "! 1" << endl; return; }

    int next_v = 4;
    for (int i = 0; i < n - 2; ++i) {
        if (ask(next_v, next_v + 1)) {
            cout << "! " << next_v << endl;
            return;
        }
        next_v += 2;
    }

    cout << "! " << next_v << endl;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}