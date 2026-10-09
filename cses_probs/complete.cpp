#include<bits/stdc++.h>
using namespace std;


void populate(vector<vector<int>> &mat){
    int n = mat.size();
    int mex = 0;

    set<int> s;
    for(int i = 0;i<n;i++){
      for(int j = i;j<n;j++){
        if(i==j){mat[i][j]=0;continue;}
        else if(j>i){
          for(int i_k = 0;i_k < i;i_k++){
            s.insert(mat[i_k][j]);
          }
          for(int j_k = 0;j_k < j;j_k++){
            s.insert(mat[i][j_k]);
          }

          for(auto&u : s){
            if(mex==u)mex++;
          }

          mat[i][j] = mex;
          mat[j][i] = mex;
          s ={};
          mex = 0;
        }
      }
    }

    return;
   // srry my audio wont be there so pls spare me my earband just dies
}
void solve(){
  int n;
  cin >> n;

  
  vector<vector<int>> mat(n,vector<int> (n,0));
  populate(mat);
  for(auto& row : mat){
    for(auto&x : row){
      std::cout << x << ' ';
    }
    cout << '\n';
  }
  return;
}

int main(){
  solve();
  return 0;
}
