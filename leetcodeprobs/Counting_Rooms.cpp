#include <bits/stdc++.h>
using namespace std;
#define vvc vector<vector<char>>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vi vector<int>
#define qpii queue<pair<int, int>>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vvc grid(n, vc(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    vvi comp(n, vi(m, 0));

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    int component = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (grid[i][j] == '.')
            {

                component++;

                qpii q;
                q.push({i, j});

                grid[i][j] = '#';
                comp[i][j] = component;

                while (!q.empty())
                {

                    auto [x, y] = q.front();
                    q.pop();

                    for (int k = 0; k < 4; k++)
                    {

                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if (nx >= 0 && nx < n &&
                            ny >= 0 && ny < m &&
                            grid[nx][ny] == '.')
                        {

                            grid[nx][ny] = '#';
                            comp[nx][ny] = component;
                            q.push({nx, ny});
                        }
                    }
                }
            }
        }
    }

    cout << component << '\n';

    return 0;
}