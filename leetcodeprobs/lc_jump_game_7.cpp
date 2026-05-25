#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.size();
        
        if (s[n - 1] != '0') return false;

        unordered_set<int> zero_indices;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                zero_indices.insert(i);
            }
        }

        vector<bool> visited(n, false);
        queue<int> q;
        
        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            if (curr == n - 1) {
                return true;
            }

            int start_range = curr + minJump;
            int end_range = min(curr + maxJump, n - 1);

            for (int next_idx = start_range; next_idx <= end_range; next_idx++) {
                if (zero_indices.count(next_idx) && !visited[next_idx]) {
                    visited[next_idx] = true;
                    q.push(next_idx);
                }
            }
        }

        return false;
    }
};

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}