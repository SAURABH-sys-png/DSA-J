#include <bits/stdc++.h>

using namespace st;

class Solution {
public:
  bool checkRow(vector<vector<char>> &board, int i, int j) {

    char ch = board[i][j];

    for (int k = i + 1; k < board.size(); k++) {
      if (ch == board[k][j])
        return false;
    }
    return true;
  }

  bool checkCol(vector<vector<char>> &board, int i, int j) {
    char ch = board[i][j];
    for (int k = j + 1; k < board[0].size(); k++) {
      if (board[i][k] == ch) {
        return false;
      }
    }

    return true;
  }

  bool checkSub(vector<vector<char>> &board, int i, int j) {
    int row = (i / 3) * 3;
    int col = (j / 3) * 3;
    char ch = board[i][j];

    for (int r = row; r < (row + 3); r++) {
      for (int c = col; c < (col + 3); c++) {
        if (r == i && c == j)
          continue;

        if (board[r][c] == ch)
          return false;
      }
    }
    return false;
  }
  bool isValidSudoku(vector<vector<char>> &board) {

    int rows = board.size();
    int col = board[0].size();
    for (int i = 0; i < rows; i++) {

      for (int j = 0; j < cols; j++) {
        char ch = board[i][j];
        if (ch == '.')
          continue;
        if (!checkSub(board, i, j))
          return false;
        if (!checkCol(board, i, j))
          return false;
        if (!checkRow(board, i, j))
          return false;
      }
    }

    return true;
  }
};
int main() { return 0; }
