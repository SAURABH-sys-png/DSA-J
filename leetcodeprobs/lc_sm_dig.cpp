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
int sum = 0;
    int formSum(TreeNode* root,int prevNum){
        if(root== nullptr)return 0;
        prevNum = prevNum*10 + root->val;
        sum+=formSum(root->left,prevNum);
        sum+=formSum(root->right,prevNum);
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        return formSum(root,0);   
    }
};


int main(){
    return 0;
}