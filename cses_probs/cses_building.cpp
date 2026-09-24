#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<bool> seen(n + 1, false);
    vector<int> assigned(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (assigned[i] != 0)
            continue;

        assigned[i] = 1;

        queue<int> q;
        q.push(i);
        while (!q.empty())
        {
            int tp = q.front();
            q.pop();
            for (auto u : adj[tp])
            {
                if (assigned[u] == 0)
                {
                    assigned[u] = (assigned[tp] == 1) ? 2 : 1;
                    q.push(u);
                }
                else if (assigned[u] == assigned[tp])
                {
                    cout << "IMPOSSIBLE" << '\n';
                    return;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << assigned[i] << ' ';
    }

    return;
}
int main()
{
    solve();
    return 0;
}