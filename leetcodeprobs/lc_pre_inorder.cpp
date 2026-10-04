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
	TreeNode *bld(vector<int> &in, vector<int> &post, int st, int end, int idx)
	{
		if (st > end) return nullptr;
		TreeNode *nd = new TreeNode(post[idx]);
		idx--;
		if (st == end)
			return nd;

		auto it	 = lower_bound(in.begin(), in.end(), nd->val);
		idx = it - in.begin();
		nd->right = bld(in, post, st + 1, end, idx);
		nd->left = bld(in, post, st, end - 1, idx);
		return nd;
	}

	TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
	{
		int st = 0;
		int end = inorder.size() - 1;
		int idx = end;
		return bld(inorder, postorder, st, end, idx);
	}
};

int main()
{
	return 0;
}
