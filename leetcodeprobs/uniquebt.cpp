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
private:
    unordered_map<string, vector<TreeNode *>> memo;

    vector<TreeNode *> helper(int start, int end)
    {
        vector<TreeNode *> result;

        if (start > end)
        {
            result.push_back(nullptr);
            return result;
        }

        string key = to_string(start) + "_" + to_string(end);
        if (memo.find(key) != memo.end())
        {
            return memo[key];
        }

        for (int i = start; i <= end; i++)
        {
            vector<TreeNode *> left = helper(start, i - 1);
            vector<TreeNode *> right = helper(i + 1, end);

            for (TreeNode *l : left)
            {
                for (TreeNode *r : right)
                {
                    TreeNode *root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    result.push_back(root);
                }
            }
        }

        memo[key] = result;
        return result;
    }

public:
    vector<TreeNode *> generateTrees(int n)
    {
        memo.clear();
        return helper(1, n);
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
        int n;
        cin >> n;
        Solution sol;
        vector<TreeNode *> trees = sol.generateTrees(n);
        cout << "Number of unique BSTs with " << n << " nodes: " << trees.size() << "\n";
    }

    return 0;
}