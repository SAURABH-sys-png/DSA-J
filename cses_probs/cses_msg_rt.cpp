#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    if (!(cin >> n >> m))
        return;

    vector<vector<int>> adj(n + 1);
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int tp = q.front();
        q.pop();

        if (tp == n)
        {
            vector<int> res;
            int curr = n;
            while (curr != 0)
            {
                res.push_back(curr);
                curr = parent[curr];
            }
             // extra iteration 

            cout << res.size() << '\n';
            for (int i = (int)res.size()-1; i >=0; i--)
            {
                cout << res[i] << ' ';
            }
            cout << '\n';
            return;
        }

        for (int u : adj[tp])
        {
            if (!visited[u])
            {
                visited[u] = true;
                parent[u] = tp;
                q.push(u);
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

// initiation of the arrays thee llm suggest me to use dynamic arruys instead of static arrays
// st node was not set to true
// 