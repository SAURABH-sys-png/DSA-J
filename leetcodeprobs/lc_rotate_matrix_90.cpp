#include <iostream>
#include <vector>
#include <string>
#include <sysexits.h>


using namespace std;

class Solution {
public:
    void swappy(vector<vector<int>>& matrix,int iniI,int iniJ,int resI,int resJ){
        int temp = matrix[iniI][iniJ];
        matrix[iniI][iniJ] = matrix[resI][resJ];
        matrix[resI][resJ] = temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i>j){
                   swappy(matrix,i,j,j,i); 
                }
            }
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n/2;j++){
                swappy(matrix,i,j,i,n-1-j);
            }
        }
        
    }
};

int main() {
    // Problem: rotate matrix 90.
    // Time Complexity: O(...) based on Solution::rotate implementation.
    // Space Complexity: O(...) based on Solution::rotate implementation.
    Solution obj;
      = {{1,2,3},{4,5,6},{7,8,9}};
    obj.rotate(arg1);
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
