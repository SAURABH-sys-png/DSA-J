#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root->left && !root->right)
        {
            return 0;
        }
        else{
            int lef = maxDepth(root->left);
            int rt = maxDepth(root->right); 
            int maxi = max(lef,rt);
            return (maxi+1);
        }
    }
};

int main()
{
    return 0;
}