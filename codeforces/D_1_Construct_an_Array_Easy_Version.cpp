#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Restriction
{
    int o, i, j;
};

void solve()
{
    int n, m;
    if (!(cin >> n >> m))
        return;

    vector<Restriction> restrictions(m);

    vector<vector<int>> type(n + 1, vector<int>(n + 1, 0));

    for (int k = 0; k < m; ++k)
    {
        cin >> restrictions[k].o >> restrictions[k].i >> restrictions[k].j;
        type[restrictions[k].i][restrictions[k].j] = restrictions[k].o;
    }

    vector<int> sign(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        if (type[i][i] == 1)
        {
            sign[i] = 1; // a_i >= 0
        }
        else
        {
            sign[i] = -1; // a_i < 0
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (sign[i] == 1 && sign[j] == 1)
            {
                if (type[i][j] == 2)
                {
                    cout << "NO\n";
                    return;
                }
            }
            if (sign[i] == -1 && sign[j] == -1)
            {
                if (type[i][j] == 1)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    vector<vector<int>> adj(n + 1);
    vector<int> in_degree(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (sign[i] != sign[j])
            {
                int pos_idx = (sign[i] == 1) ? i : j;
                int neg_idx = (sign[i] == -1) ? i : j;

                if (type[i][j] == 1)
                {

                    adj[neg_idx].push_back(pos_idx);
                    in_degree[pos_idx]++;
                }
                else
                {

                    adj[pos_idx].push_back(neg_idx);
                    in_degree[neg_idx]++;
                }
            }
        }
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        if (in_degree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> topo_order;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        topo_order.push_back(u);

        for (int v : adj[u])
        {
            if (--in_degree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    if (topo_order.size() < n)
    {
        cout << "NO\n";
        return;
    }

    vector<long long> a(n + 1);
    for (int rank = 0; rank < n; ++rank)
    {
        int node = topo_order[rank];
        long long abs_val = rank + 1;
        a[node] = abs_val * sign[node];
    }

    cout << "YES\n";
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}