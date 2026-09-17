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
    void reversell(ListNode *&head)
    {
        // reverse karna hai

        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }
    void insertRev(ListNode *&revhead, int val)
    {
        if (revhead == nullptr)
        {
            ListNode *tmp = new ListNode(val);
            revhead = tmp;
            return;
        }

        ListNode *itr = revhead;
        while (itr->next != nullptr)
        {
            itr = itr->next;
        }
        ListNode *tmp = new ListNode(val);
        itr->next = tmp;
        return;
    }
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *nonRev = nullptr;

        ListNode *left_ptr = nullptr;
        ListNode *right_ptr = nullptr;
        ListNode *itr = head;
        int idx = 1;
        while (itr != nullptr)
        {
            if (idx >= left && idx <= right)
            {
                int vl = itr->val;
                insertRev(nonRev, vl);
            }
            if (idx == left - 1)
            {
                left_ptr = itr;
            }
            if (idx == right)
            {
                right_ptr = itr;
            }

            itr = itr->next;
            idx++;
        }
        reversell(nonRev);

        ListNode *end = nonRev;

        while (end->next != nullptr)
        {
            end = end->next;
        }

        end->next = right_ptr->next;
        if (left == 1)
        {
            return nonRev;
        }
        left_ptr->next = nonRev;

        return head;
    }

    int szll(ListNode *&head)
    {
        int x = 0;
        ListNode *tmp = head;
        while (tmp != nullptr)
        {
            x++;
            tmp = tmp->next;
        }
        return x;
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        //
        int sz = szll(head);
        int itr = sz / k;

        int st = 1;
        int end = st + k - 1;
        while (itr--)
        {
            head = reverseBetween(head, st, end);
            st = end + 1;
            end = st + k - 1;
        }

        return head;
    }
};

int main()
{
    return 0;
}
