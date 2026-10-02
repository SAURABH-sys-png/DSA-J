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
    bool hasSum(TreeNode *root, int targetSum, int Sum)
    {
        if (root == nullptr)
            return 0;
        Sum += root->val;
        if (Sum == targetSum && (root->left == nullptr && root->right == nullptr) )
            return 1;
        else
        {
            return hasSum(root->left, targetSum, Sum) || hasSum(root->right, targetSum, Sum);
        }

        return 0;
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int sum = 0;
        return hasSum(root, targetSum, sum);
    }
};

int main()
{
    return 0;
}