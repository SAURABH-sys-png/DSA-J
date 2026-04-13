#include <iostream>
#include <vector>


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++){
            for(int col = 0;col<9;col++){
                
                char temp = board[i][col];
                if(temp == '.')continue;
                //col search

                for(int j = 0;j<9;j++){
                    if(j == col)continue;
                    if(board[i][j] == temp)return false;
                }

                //row search

                for(int row = 0;row<9;row++){
                    if(row == i)continue;
                    if(board[row][col] == temp)return false;
                }

                //its own 3x3 matrix search hardest part

                int subrowmin;
                int subcolmin;
                int subrowmax;
                int subcolmax;


                if(i>=0 && i<=2){
                    if(col>=0 && col<=2){
                        subrowmin = 0;
                        subcolmin = 0;
                        subrowmax = 2;
                        subcolmax = 2;
                    }
                    else if(col>=3 && col<=5){
                        subrowmin = 0;
                        subcolmin = 3;
                        subrowmax = 2;
                        subcolmax = 5;
                    }
                    else if(col>=6 && col<=8){
                        subrowmin = 0;
                        subcolmin = 6;
                        subrowmax = 2;
                        subcolmax = 8;
                    }
                }
                else if(i>=3 && i<=5){
                    //
                    if(col>=0 && col<=2){
                        subrowmin = 3;
                        subcolmin = 0;
                        subrowmax = 5;
                        subcolmax = 2;
                    }
                    else if(col>=3 && col<=5){
                        subrowmin = 3;
                        subcolmin = 3;
                        subrowmax = 5;
                        subcolmax = 5;
                    }
                    else if(col>=6 && col<=8){
                        subrowmin = 3;
                        subcolmin = 6;
                        subrowmax = 5;
                        subcolmax = 8;
                    }
                    //
                }
                else if(i>=6 && i<=8){
                    if(col>=0 && col<=2){
                        subrowmin = 6;
                        subcolmin = 0;
                        subrowmax = 8;
                        subcolmax = 2;
                    }
                    else if(col>=3 && col<=5){
                        subrowmin = 6;
                        subcolmin = 3;
                        subrowmax = 8;
                        subcolmax = 5;
                    }
                    else if(col>=6 && col<=8){
                        subrowmin = 6;
                        subcolmin = 6;
                        subrowmax = 8;
                        subcolmax = 8;
                    }
                }

                for(int s = subrowmin;s<=subrowmax;s++){
                    for(int t = subcolmin;t<=subcolmax;t++){
                        if(s == i && t == col)continue;
                        if(board[s][t] == temp)return false;
                    }
                }



            }
        }

        return true;
    }
};
