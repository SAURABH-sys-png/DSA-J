#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;
const int dr[4] = {-1, 1, 0, 0};
const int dc[4] = {0, 0, -1, 1};
const char ch[4] = {'U', 'D', 'L', 'R'};

vector<vector<int>> monsterTimes(const vector<string>& g) {
    int n = g.size(), m = g[0].size();
    vector<vector<int>> md(n, vector<int>(m, INF));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (g[i][j] == 'M') {
                md[i][j] = 0;
                q.push({i, j});
            }

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();
        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d], nc = c + dc[d];
            if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
            if (g[nr][nc] == '#' || md[nr][nc] != INF) continue;
            md[nr][nc] = md[r][c] + 1;
            q.push({nr, nc});
        }
    }
    return md;
}

optional<string> escapePath(const vector<string>& g,
                            const vector<vector<int>>& md,
                            int sr, int sc) {
    int n = g.size(), m = g[0].size();
    vector<vector<int>> pd(n, vector<int>(m, -1));
    vector<vector<int>> from(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    pd[sr][sc] = 0;
    from[sr][sc] = 4;
    q.push({sr, sc});

    int er = -1, ec = -1;
    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();
        if (r == 0 || r == n - 1 || c == 0 || c == m - 1) {
            er = r;
            ec = c;
            break;
        }
        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d], nc = c + dc[d];
            if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
            if (g[nr][nc] == '#' || pd[nr][nc] != -1) continue;
            int t = pd[r][c] + 1;
            if (md[nr][nc] <= t) continue;
            pd[nr][nc] = t;
            from[nr][nc] = d;
            q.push({nr, nc});
        }
    }

    if (er == -1) return nullopt;

    string path;
    int r = er, c = ec;
    while (!(r == sr && c == sc)) {
        int d = from[r][c];
        path += ch[d];
        r -= dr[d];
        c -= dc[d];
    }
    reverse(path.begin(), path.end());
    return path;
}

optional<string> solveMonsters(const vector<string>& g, int sr, int sc) {
    auto md = monsterTimes(g);
    return escapePath(g, md, sr, sc);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> g(n);
    int sr = 0, sc = 0;
    for (int i = 0; i < n; i++) {
        cin >> g[i];
        for (int j = 0; j < m; j++)
            if (g[i][j] == 'A') {
                sr = i;
                sc = j;
            }
    }

    auto res = solveMonsters(g, sr, sc);
    if (!res) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n" << res->size() << "\n" << *res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
