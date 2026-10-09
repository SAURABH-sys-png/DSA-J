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
 

vector<int> arr(TreeNode* root){

  if(!root) return {};


  vector<int> ans;
  vector<int> rightarr = arr(root->right);
  vector<int> leftarr = arr(root->left);


  for(auto& u : rightarr)
    ans.push_back(u);
  arr.push_back(root->val);
  for(auto & u : leftarr)
    arr.push_back(u);
  

  return arr;
}
class BSTIterator {
public:
    vector<int> arr_tr;
    int idx =-1;
    BSTIterator(TreeNode* root) {
        arr_tr = arr(root);
    }
    
    int next() {
        idx++;
        return arr_tr[idx];
    }
    
    bool hasNext() {
        if(idx+1 >= arr_tr.size())return false;

        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

int main(){
  return 0;
}
