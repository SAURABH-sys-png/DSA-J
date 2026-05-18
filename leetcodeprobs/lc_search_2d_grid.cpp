#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    bool fromtoprow(const vector<std::vector<int>> &grid, int target, int endRow)
    { // check from top for the row
        int lastRow = min(endRow, (int)grid.size() - 1);

        for (int i = 0; i <= lastRow; ++i)
        {
            if (find(grid[i].begin(), grid[i].end(), target) != grid[i].end())
            {
                return true;
            }
        }

        return false;
    }

    bool frombottomrow(const vector<std::vector<int>> &grid, int target, int endRow)
    { // check from given till end
        int lastRow = min(endRow, (int)grid.size() - 1);

        for (int i = lastRow; i <= grid.size() - 1; ++i)
        {
            if (find(grid[i].begin(), grid[i].end(), target) != grid[i].end())
            {
                return true;
            }
        }

        return false;
    }
    bool fromtopcol(const std::vector<std::vector<int>> &grid, int target, int endCol)
    { // from left to right
        if (grid.empty() || grid[0].empty())
            return false;

        int colsToCheck = min(endCol, (int)grid[0].size() - 1) + 1;

        for (const auto &row : grid)
        {
            if (std::find(row.begin(), row.begin() + colsToCheck, target) != row.begin() + colsToCheck)
            {
                return true;
            }
        }

        return false;
    }

    bool frombottomcol(const std::vector<std::vector<int>> &grid, int target, int startCol)
    {
        // Safety check for empty grid
        if (grid.empty() || grid[0].empty() || startCol < 0)
            return false;

        for (const auto &row : grid)
        {
            // Ensure startCol doesn't exceed the actual width of this specific row
            if (startCol < row.size())
            {
                // Search from startCol to the very end of the row
                if (std::find(row.begin() + startCol, row.end(), target) != row.end())
                {
                    return true; // Found the target!
                }
            }
        }

        return false; // Target not found in any row
    }
    long long total_sum(std::vector<std::vector<int>> &grid)
    {
        long long sum = 0;
        for (const auto &row : grid)
        {
            for (int element : row)
            {
                sum += element;
            }
        }
        return sum;
    }
    bool isequal(vector<vector<int>> &grid)
    {
        long long totalsum = 0;
        long long rowsum = 0;
        long long colsum = 0;

        int numr = grid.size();
        int numc = grid[0].size();

        totalsum = total_sum(grid);

        // horizontal check

        for (int i = 0; i < numr; i++)
        {
            for (int j = 0; j < numc; j++)
            {
                rowsum += grid[i][j];
            }
            if (2 * rowsum == totalsum)
                return true;
            else if (2 * rowsum > totalsum)
            {
                int diff = 2 * rowsum - totalsum;
                if (fromtoprow(grid, diff, i))
                    return true;
                else
                {
                    break;
                }
            }
            else
            {
                int diff = totalsum - 2 * rowsum;
                if (frombottomrow(grid, diff, i))
                    return true;
            }
        }
        // vertical check
        for (int k = 0; k < numc; k++)
        {
            for (int l = 0; l < numr; l++)
            {
                colsum += grid[l][k];
            }
            if (2 * colsum == totalsum)
                return true;
            else if (2 * colsum > totalsum)
            {
                int diff = 2 * colsum - totalsum;
                if (fromtopcol(grid, diff, k))
                    return true;
                else
                {
                    break;
                }
            }
            else
            {
                int diff = totalsum - 2 * colsum;
                if (frombottomcol(grid, diff, k))
                    return true;
            }
        }

        return false;
    }

    bool canPartitionGrid(vector<vector<int>> &grid)
    {
        return isequal(grid);
    }
};

int main()
{

    return 0;
}