#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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
    void allval(TreeNode *root, vector<int> nums)
    {
        if (root == NULL)
            return;

        nums.push_back(root->val);
        allval(root->left, nums);
        allval(root->right, nums);
    }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> tree1;
        vector<int> tree2;
        allval(p, tree1);
        allval(q, tree2);

        return (tree1 == tree2);
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        
    }

    return 0;
}
