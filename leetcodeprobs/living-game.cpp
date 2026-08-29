#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
      int cntone(vector<vector<int>> &board, int i, int j) {
    int di[] = {-1,-1,-1,0,1,1,1,0};
    int dj[] = {-1,0,1,1,1,0,-1,-1};

    int cnt = 0;
    int rows = board.size();
    int cols = board[0].size();

    for (int idx = 0; idx < 8; idx++) {
        int ni = i + di[idx];
        int nj = j + dj[idx];

        if (ni >= 0 && ni < rows &&
            nj >= 0 && nj < cols &&
            board[ni][nj] == 1) {
            cnt++;
        }
    }

    return cnt;
}


      void gameOfLife(vector<vector<int>>& board) {
    int rows = board.size();
    int cols = board[0].size();

    vector<vector<int>> original = board;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            int count = cntone(original, i, j);

            if (original[i][j] == 1) {
                if (count < 2 || count > 3)
                    board[i][j] = 0;
                else
                    board[i][j] = 1;
            }
            else {
                if (count == 3)
                    board[i][j] = 1;
                else
                    board[i][j] = 0;
            }
        }
    }
}


};

int main(){
  return 0;
}
