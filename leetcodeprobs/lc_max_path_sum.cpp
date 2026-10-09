#include <bits/stdc++.h>
using namepspace std;



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
  int res = INT_MIN;
    vector<int> two_num(TreeNode* root){
      if(!root) return 0;
      int l = max(0,two_num(root->left));
      int r = max(0,two_num(root->right));
      

      res= max(l+r+root->val,res);
      return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {

      two_num(root);
      return res;
    }
};


int main(){
  return 0;
}
