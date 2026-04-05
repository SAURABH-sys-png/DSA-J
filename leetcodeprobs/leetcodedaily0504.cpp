#include <iostream>

using namespace std;

class Solution
{
public:
    struct node
    {
        char data;
        node *next;
    };
    void insert(node *&head, char data)
    {
        node *temp = new node();
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    void pop(node *&head)
    {
        if (head == nullptr)
        {
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }

    struct nodeUD
    {
        char data;
        nodeUD *next;
    };
    void insertUD(nodeUD *&head, char data)
    {
        nodeUD *temp = new nodeUD();
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    void popUD(nodeUD *&head)
    {
        if (head == nullptr)
        {
            return;
        }
        nodeUD *temp = head;
        head = head->next;
        delete temp;
    }
    bool judgeCircle(string moves)
    {
        node *head = nullptr;
        nodeUD *headUD = nullptr;

        for (int i = 0; i < moves.size(); i++)
        {
            if (head == nullptr && (moves[i] == 'R' || moves[i] == 'L'))
            {
                insert(head, moves[i]);
                continue;
            }
            if (headUD == nullptr && (moves[i] == 'U' || moves[i] == 'D'))
            {
                insertUD(headUD, moves[i]);
                continue;
            }
            else
            {
                if ((head != NULL) && (head->data == moves[i]))
                {
                    insert(head, moves[i]);
                    continue;
                }
                if ((headUD != NULL) && (headUD->data == moves[i]))
                {
                    insertUD(headUD, moves[i]);
                    continue;
                }
                if ((head != NULL) && ((head->data == 'R' && moves[i] == 'L') || (head->data == 'L' && moves[i] == 'R')))
                {
                    pop(head);
                    continue;
                }
                if ((headUD != NULL) && ((headUD->data == 'U' && moves[i] == 'D') || (headUD->data == 'D' && moves[i] == 'U')))
                {
                    popUD(headUD);
                    continue;
                }
            }
        }

        if (head == nullptr && headUD == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution sol;
    cout << sol.judgeCircle("RLUURDDDLU") << endl;
    return 0;
}