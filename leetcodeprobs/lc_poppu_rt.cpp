#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    int dpt = 0;
    map<int, vector<Node *>> mp;

    void updateDpt(Node *root, int depth)
    {
        if (!root)
            return;
        if (dpt == 0)
        {
            mp[0].push_back(root);
        }
        updateDpt(root->left, depth + 1);
        updateDpt(root->right, depth + 1);
        return;
    }
    Node *connect(Node *root)
    {
        // depth -> elements from left to right
        // find the nodes at the same depth
        // traverse through each values point thm to ext node
        // return rroot
        int depth = 0;
        updateDpt(root,depth);
        for (auto &[key, node] : mp)
        {
            for (int i = 0; i < node.size() - 1; i++)
            {
                node[i]->next = node[i + 1];
            }
            node[node.size() - 1]->next = nullptr;
        }

        return root;
    }
};

int main()
{
    return 0;
}