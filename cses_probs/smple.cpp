#include <bits/stdc++.h>
using namespace std;
#define N 100005

vector<vector<int>> adj(N);
vector<bool> seen(N, false);
int par[N]; // we did not made use of parity or the parent we made us of hash map __interface IInterface {
  
int st = 0, en = 0;

bool dfs(int s, int p) {
  seen[s] = true;
  par[s] = p;
  for (int u : adj[s]) {
    if (u == p) continue;          // skip the edge we came from
    if (seen[u]) {                 // back edge to an ancestor -> cycle
      st = u;
      en = s;
      return true;
    }
    if (dfs(u, s)) return true;    // propagate "found" upward
  }
  return false;
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (!seen[i] && dfs(i, 0)) break;
  }

  if (st == 0) {
    cout << "IMPOSSIBLE\n";
    return 0;
  }

  vector<int> arr;
  arr.push_back(st);
  for (int v = en; v != st; v = par[v]) arr.push_back(v);
  arr.push_back(st);

  cout << arr.size() << '\n';
  for (int x : arr) cout << x << ' ';
  cout << '\n';
}
