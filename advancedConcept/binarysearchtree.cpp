#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *head = NULL;

class binarysr
{

public:
    bool search(node *head, int n)
    {
        if (head == NULL)
        {
            return false;
        }
        else if (head->data > n)
        {

            return search(head->left, n);
        }

        else if (head->data == n)
        {
            return true;
        }
        else
        {

            return search(head->right, n);
        }
    }
    void insertval(node *&head, int n)
    {
        if (head == NULL)
        {
            node *a = new node();
            a->data = n;
            a->left = NULL;
            a->right = NULL;

            head = a;
        }

        else
        {
            if (head->data > n)
            {
                insertval(head->left, n);
            }
            else
            {
                insertval(head->right, n);
            }
        }
    }

    
};

int main()
{
    binarysr bst;

    bst.insertval(head, 50);
    bst.insertval(head, 30);
    bst.insertval(head, 70);
    bst.insertval(head, 20);
    bst.insertval(head, 40);
    bst.insertval(head, 60);
    bst.insertval(head, 80);
    bool res = bst.search(head, 0);

    cout << res +1 << endl;

    return 0;
}
