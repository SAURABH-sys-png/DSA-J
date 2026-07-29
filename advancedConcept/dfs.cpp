#include <bits/stdc++.h>
using namespace std;

// making a dfs
// simply printing all the elements of the search
void dfs(int node, vector<int> adj[], vector<bool> &visited)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    cout << node << endl;
    for (auto u : adj[node])
    {
        dfs(u, adj, visited);
    }
}
int main()
{
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];

    cout << "Enter " << E << " edges (u v):\n";
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;

        // Undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    vector<bool> visited(V, false);

    cout << "DFS Traversal: ";
    dfs(start, adj, visited);

    cout << endl;

    return 0;
}