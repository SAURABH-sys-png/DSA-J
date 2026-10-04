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

// Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
// Output: [3,9,20,null,null,15,7]
class Solution
{
public:
    unordered_map<int, int> mp;
    TreeNode *bld(vector<int> &preorder, int &preIndex, int left, int right)
    {
        if (left > right)
            return nullptr;

        int val = preorder[preIndex];
        preIndex++;
        int idx = mp[val];
        TreeNode *root = new TreeNode(val);

        root->left = bld(preorder, preIndex, left, idx - 1);
        root->right = bld(preorder, preIndex, idx + 1, right);

        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {

        for (int i = 0; i < inorder.size() - 1; i++)
        {
            int num = inorder[i];
            mp[num] = i;
        }
        int preIdx = 0;
        int right = preorder.size() - 1;
        TreeNode *ans = bld(preorder, preIdx, 0, right);

        return ans;
    }
};

int main()
{
    return 0;
}
