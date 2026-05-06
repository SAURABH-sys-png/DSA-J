#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution
{
public:
    bool canMove(vector<vector<char>> &boxGrid, int i, int j)
    {
        char stone = '#';
        char obs = '*';
        char empty = '.';

        if (j == boxGrid[0].size() - 1)
        {
            return false;
        }
        else if (boxGrid[i][j + 1] == empty)
            return true;
        else if (boxGrid[i][j + 1] != empty)
            return false;

        else
        {
            return false;
        }
    }
    vector<vector<char>> rotateTheBox(vector<vector<char>> &boxGrid)
    {
        char stone = '#';
        char obs = '*';
        char empty = '.';

        for (int i = 0; i < boxGrid.size(); i++)
        {
            for (int j = 0; j < boxGrid[0].size(); j++)
            {
                if (boxGrid[i][j] == stone && canMove(boxGrid, i, j))
                {
                    boxGrid[i][j] = empty;
                    boxGrid[i][j + 1] = stone;
                    j = -1;
                }
            }
        }

        vector<vector<char>> res;

        for (int p = 0; p < boxGrid[0].size(); p++)
        {
            vector<char> temp;
            for (int l = boxGrid.size() - 1; l >= 0; l--)
            {
                temp.push_back(boxGrid[l][p]);
            }
            res.push_back(temp);
        }

        return res;
    }
};

int main()
{
    return 0;
}