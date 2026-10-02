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

// 4
// 9   0

// 5 1
class Solution
{
public:
    int numLeafs(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        else
            return (numLeafs(root->left) + numLeafs(root->right));

        return 0;
    }
    int sum = 0;
    int sumNumbers(TreeNode *root)
    {

        if (root == nullptr)
        {
            return 0;
        }
        else
        {
            sum +=( numLeafs(root)*root->val);
            sum+= sumNumbers(root->left);
            sum+=sumNumbers(root->right);
        }

        return sum;
    }
};
int main()
{
    return 0;
}