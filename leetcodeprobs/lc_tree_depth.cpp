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
        int res = 0;
        if (root == nullptr)
            return 0;
        if (root->right == NULL && root->left == NULL)
        {
            return 1;
        }
        else if (root->left != NULL && root->right != NULL)
        {
            res = 1 + max(maxDepth(root->right), maxDepth(root->left));
            return res;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            res = 1 + maxDepth(root->left);
            return res;

        }
        else if (root->left == NULL && root->right != NULL)
        {
            res = 1 + maxDepth(root->right);
            return res;
        }
        return res;
    }
};

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}