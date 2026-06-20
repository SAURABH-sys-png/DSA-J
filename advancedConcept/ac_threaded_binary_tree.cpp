#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <vector>
#include <mutex>

using namespace std;
// Basic structure used up for declaring a threaded binary tree
struct node
{
    int data;
    node *left;
    node *right;
    bool lThread;
    bool rThread;

    node(int val)
    {
        data = val;
        left = right = nullptr;
        lThread = rThread = true;
    }
};

// no we go up for basic ooperations

class threadedbt
{

public:
    node *root;
    threadedbt() { root = nullptr; }

    // insertion of nnodes in the threaded bt
    void insert(int key)
    {
        if (root == nullptr)
        {
            root = new node(key);
            return;
        }

        // fining the right node to operate with

        node *curr = root;
        node *parent = nullptr;

        while (curr != nullptr)
        {
            parent = curr;

            if (key < curr->data)
            {
                if (!curr->lThread)
                    curr = curr->left;

                else
                    break;
            }
            else
            {
                if (!curr->rThread)
                {
                    curr = curr->right;
                }
                else
                {
                    break;
                }
            }
        }

        node *newnode = new node(key);

        if (key < parent->data)
        {
            newnode->right = parent;
            newnode->left = parent->left;
            parent->lThread = false;
            parent->left = newnode;
        }
        else
        {
            newnode->right = parent->right;
            newnode->left = parent;
            parent->rThread = false;
            parent->right = newnode;
        }
    }
    // to find th eleftmost or the smallest node to be on
    node *leftmost(node *root)
    {
        if (root == nullptr)
            return nullptr;
        while (root->lThread != true)
        {
            root = root->left;
        }
        return root;
    }
    // to print all values in the inorder traversal
    void inorder()
    {
        node *curr = leftmost(root);
        while (curr != nullptr)
        {
            cout << curr->data << " ";

            if (curr->rThread)
            {
                curr = curr->right;
            }
            else
            {

                curr = leftmost(curr->right);
            }
        }
        cout << endl;
    }
};

int main()
{

    return 0;
}