#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    long long a;
    int n;
    cin >> a >> n;

    long long d1, d2;
    cin >> d1 >> d2;
    if (d1 > d2) swap(d1, d2);

    string s = to_string(a);
    int L = s.length();

    vector<long long> candidates;

    if (d1 == 0 || d2 == 0) {
        candidates.push_back(0);
    }

    if (L > 1) {
        string cand = "";
        for (int i = 0; i < L - 1; i++) cand += to_string(d2);
        candidates.push_back(stoll(cand));
    }

    {
        string cand = "";
        cand += (d1 == 0 ? to_string(d2) : to_string(d1));
        for (int i = 0; i < L; i++) cand += to_string(d1);
        candidates.push_back(stoll(cand));
    }

    string current_pref = "";
    bool prefix_valid = true;

    for (int i = 0; i < L; i++) {
        if (!prefix_valid) break;

        int allowed_digits[] = {(int)d1, (int)d2};
        for (int d : allowed_digits) {
            if (i == 0 && d == 0 && L > 1) continue;

            string cand1 = current_pref + to_string(d);
            while (cand1.length() < L) cand1 += to_string(d1);
            candidates.push_back(stoll(cand1));

            string cand2 = current_pref + to_string(d);
            while (cand2.length() < L) cand2 += to_string(d2);
            candidates.push_back(stoll(cand2));
        }

        int current_digit = s[i] - '0';
        if (current_digit == d1 || current_digit == d2) {
            current_pref += s[i];
        } else {
            prefix_valid = false;
        }
    }

    if (prefix_valid) {
        candidates.push_back(a);
    }

    long long min_diff = -1;
    for (long long c : candidates) {
        long long diff = abs(a - c);
        if (min_diff == -1 || diff < min_diff) {
            min_diff = diff;
        }
    }

    cout << min_diff << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}