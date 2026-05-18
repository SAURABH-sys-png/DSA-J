#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};


class Solution
{
public:
    
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

    int findMin(vector<int> &nums)
    {
        node *head = new node();
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            insertval(head,nums[i]);
        }

        return (minValueNode(head)->data);
        
    }
};
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}