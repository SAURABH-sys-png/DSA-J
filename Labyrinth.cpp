#include <bits/stdc++.h>

using namespace std;

// queue<int> q;
// bool visited[N];
// int distance[N];

// visited[x] = true;
// distance[x] = 0;
// q.push(x);
// while (!q.empty())
// {
//     int s = q.front();
//     q.pop();
//     // process node s
//     for (auto u : adj[s])
//     {
//         if (visited[u])
//             continue;
//         visited[u] = true;
//         distance[u] = distance[s] + 1;
//         q.push(u);
//     }
// }

struct Posi
{
    int row;
    int col;
};

void solve(int n, int m)
{
    vector<vector<char>> matrix(n, vector<char>(m));
    queue<Posi> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // now i hav the matrix
}
int main()
{

    int n, m;
    cin >> n >> m;

    solve(n, m);

    return 0;
}