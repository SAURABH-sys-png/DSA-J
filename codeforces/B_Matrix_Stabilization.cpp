#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Direction
{
public:
    long long up(vector<vector<long long>> &matrix, long long i, long long j)
    {
        if (i == 0)
            return 0;

        return matrix[i - 1][j];
    }

    long long down(vector<vector<long long>> &matrix, long long i, long long j)
    {
        if (i == matrix.size() - 1)
            return 0;

        return matrix[i + 1][j];
    }

    long long left(vector<vector<long long>> &matrix, long long i, long long j)
    {
        if (j == 0)
            return 0;

        return matrix[i][j - 1];
    }

    long long right(vector<vector<long long>> &matrix, long long i, long long j)
    {
        if (j == matrix[0].size() - 1)
            return 0;

        return matrix[i][j + 1];
    }
};

void printMatrix(const vector<vector<long long>> &matrix)
{
    for (long long i = 0; i < matrix.size(); i++)
    {
        for (long long j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}

void solve()
{
    Direction s;
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> mat(n, vector<ll>(m, 0));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll top_n = s.up(mat,i,j);
            ll down_n = s.down(mat,i,j);
            ll right_n = s.right(mat,i,j);
            ll left_n = s.left(mat,i,j);

            ll maxi = max({top_n,down_n,right_n,left_n});
            if (mat[i][j] > maxi)
            {
                mat[i][j] = maxi;
            }
            
        }
    }

    printMatrix(mat);

}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}