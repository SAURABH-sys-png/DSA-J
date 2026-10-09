#include <bits/stdc++.h>
using namespace std;



  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 

class Solution {
public:
    
    void populate(TreeNode* root,int depth,vector<vector<int>> &arr){
      if(!root)return;
      arr[depth].push_back(root->val);
      populate(root->left,depth+1,arr);
      populate(root->right,depth+1,arr);
      return;
    }


    vector<int> res;
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> arr(100);
        populate(root,0,arr);
        for(auto& rows : arr){
          int sz = (int)rows.size();
          if(sz){
            res.push_back(rows[sz-1]);
          }
        }

        return res;
    }

    
};


int main(){
  return 0;
}
