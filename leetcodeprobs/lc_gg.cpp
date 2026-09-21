#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void insertll(ListNode *&head, int val)
    {
        if (head == nullptr)
        {
            head->val = val;
            head->next = nullptr;
        }

        ListNode *tmp = head;
        while (tmp->next != nullptr)
        {
            tmp = tmp->next;
        }

        ListNode *temp = new ListNode(val);
        tmp->next = temp;
        return;
    }
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *smaller = nullptr;
        ListNode *bigger_but_onleft = nullptr;
        ListNode *bigger_but_onright = nullptr;

        bool flag = false;
        ListNode *curr = head;
        while (curr->next != nullptr)
        {
            int num = curr->val;
            if (num < x)
            {
                insertll(smaller, num);
            }
            else if (num > x && !flag)
            {
                insertll(bigger_but_onleft, num);
            }
            else if (num > x && flag)
            {
                insertll(bigger_but_onright, num);
            }
            else
            {
                flag = true;
            }
        }

        ListNode *newHead = smaller;
        ListNode *itr = newHead;
        while (itr->next != nullptr)
        {
            itr = itr->next;
        }
        itr->next = bigger_but_onleft;

        ListNode *rt = new ListNode(x);

        while (itr->next != nullptr)
        {
            itr = itr->next;
        }
        itr->next = bigger_but_onright;

        return newHead;
    }
};

int main()
{
    return 0;
}