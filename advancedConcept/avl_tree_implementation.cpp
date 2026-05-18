#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    int balancefactor;
};

node *root = new node();
bool search(node *root, int key)
{
    if (root == NULL)
        return false;
    else if (root->data > key)
    {
        return search(root->right, key);
    }
    else if (root->data < key)
    {
        return search(root->left, key);
    }
    else
    {
        return true;
    }
}

void insert(node *root, int key)
{
    if (root == NULL)
    {
        node *temp = new node();
        temp->data = key;
        temp->left = NULL;
        temp->right = NULL;
        root = temp;
    }

    else if (root->data > key)
    {
        insert(root->right, key);
    }
    else if (root->data < key)
    {
        insert(root->left, key);
    }
}



int main()
{
    return 0;
}