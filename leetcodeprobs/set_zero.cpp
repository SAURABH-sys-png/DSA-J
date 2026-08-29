#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        set<int> rows_w_zer;
        set<int> cols_w_zer0;


        for (int i = 0; i  < rows; i++) {
          for (int j = 0; j < cols; j++) {
            if(matrix[i][j] == 0){
              rows_w_zer.insert(i);
              cols_w_zer0.insert(j);
            }
          }
        }


        for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
            if(rows_w_zer.find(i)!=rows_w_zer.end()){
              // means it exists
              matrix[i][j] = 0;
            }
            if(cols_w_zer0.find(j)!=cols_w_zer0.end()){
              matrix[i][j] = 0;
            }
          }
        }



    }
};


int main(){
  return 0;
}
