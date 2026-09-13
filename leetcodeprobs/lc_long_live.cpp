#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void leftShiftRow(vector<vector<int>> &grid, int row, int k)
    {
        int m = grid[0].size();
        k %= m;

        vector<int> temp(m);

        for (int j = 0; j < m; j++)
        {
            temp[j] = grid[row][(j + k) % m];
        }

        grid[row] = temp;
    }

    void upShiftColumn(vector<vector<int>> &grid, int col, int k)
    {
        int n = grid.size();
        k %= n;

        vector<int> temp(n);

        for (int i = 0; i < n; i++)
        {
            temp[i] = grid[(i + k) % n][col];
        }

        for (int i = 0; i < n; i++)
        {
            grid[i][col] = temp[i];
        }
    }
    vector<vector<int>> cyclicShift(int n, vector<vector<int>> &grid, vector<int> &rowShift, vector<int> &colShift)
    {
        for(int i = 0;i<n;i++){
            int k = rowShift[i];
            leftShiftRow(grid,i,k);
        }
        for(int col = 0;col<n;col++){
            int k = colShift[col];
            upShiftColumn(grid,col,k);
        }
        return grid;
    }
};

int main()
{
    return 0;
}