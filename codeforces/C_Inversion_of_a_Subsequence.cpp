#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    int total_ones_a = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] == 1) {
            total_ones_a++;
        }
    }
    int total_zeros_b = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
        if (b[i] == 0) {
            total_zeros_b++;
        }
    }
    if (a == b) {
        std::cout << 0 << "\n";
        return;
    }
    if (total_ones_a == 0) {
        std::cout << -1 << "\n";
        return;
    }
    if (total_zeros_b == 0) {
        std::cout << -1 << "\n";
        return;
    }
    int c10 = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1 && b[i] == 0) {
            c10++;
        }
    }
    if (c10 % 2 != 0) {
        std::cout << 1 << "\n";
    } else {
        std::cout << 2 << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}