#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    void flipij(vector<vector<int>>&matrix){
      int n = matrix.size();
       for(int i =0;i<n;i++){
         for(int j = 0;j<n;j++){
           if(j>=i){
             swap(matrix[i][j],matrix[j][i]);
           }
         }
       }
    } 


    void mirrorHori(vector<vector<int>>&matrix){
      int n = matrix.size();
      n = n/2;
      int t = matrix.size();
      // 6 -> 3;
      // 5 -> 2;
      for(int i =0;i<matrix.size();i++){
        for(int j = 0;j<n;j++){
          swap(matrix[i][j],matrix[i][t-1-j]);
        }
      }
    }
    void rotate(vector<vector<int>>& matrix) {
        // [[1,2,3],[4,5,6],[7,8,9]]
        // 1 2 3
        // 4 5 6
        // 7 8 9
        
        // 7 4 1
        // 8 5 2
        // 9 6 3
        flipij(matrix);
        mirrorHori(matrix);
        return matrix;
    }
};
int main(){
  return 0;
}
