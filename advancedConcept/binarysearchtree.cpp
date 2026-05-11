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

    void printtree(node* head){
        if(head == NULL)return;

        printtree(head->left);
        cout << head->data << " ";
        printtree(head->right);
    }
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

    node *minValueNode(node *head)
    {
        node *temp = head;
        while (temp && temp->left != nullptr)
            temp = temp->left;
        return temp;
    }

    node *deleteNode(node *&head, int n)
    {
        if (head == NULL)
        {
            return;
        }

        if (n < head->data)
        {
            head->left = deleteNode(head->left, n);
        }
        else if (n > head->data)
        {
            head->right = deleteNode(head->right, n);
        }
        else
        {
            // case 1 no child or one single child
            if (head->left == NULL)
            {
                node *temp = head->right;
                delete head;
                return temp;
            }
            else if (head->right == NULL)
            {
                node *temp = head->left;
                delete head;
                return temp;
            }

            // case 2 both are there

            head->data = minValueNode(head->right)->data;
            head->right = deleteNode(head->right,head->data);
            return head;
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

    cout << res + 1 << endl;

    return 0;
}
