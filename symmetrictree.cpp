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
    bool helper(TreeNode *x, TreeNode *y)
    {
        if (x == nullptr && y == nullptr)
        {
            return true;
        }
        else if (x == nullptr || y == nullptr)
        {
            return false;
        }
        else if (x->val != y->val)
        {
            return false;
        }
        else{
            return (helper(x->left,y->right) && helper(x->right,y->left));
        }
    }
    bool isSymmetric(TreeNode *root)
    {
        return helper(root,root);
    }
};

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}