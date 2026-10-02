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
    void flatten(TreeNode *root)
    {
        if (!root)
            return;

        flatten(root->left);
        flatten(root->right);

        TreeNode *tmprht = root->right;

        TreeNode *itr = root->left;
        if (itr != nullptr)
        {
            while (itr->right != nullptr)
            {
                itr = itr->right;
            }

            itr->right = tmprht;
            root->right = root->left;
            root->left = nullptr;
        }

        return;
    }
};
int main()
{
    return 0;
}