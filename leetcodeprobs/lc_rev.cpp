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
    int llsize(ListNode *&head)
    {
        int res = 0;
        if (head == nullptr)
            return 0;

        ListNode *tmp = head;
        while (tmp != nullptr)
        {
            res++;
            tmp = tmp->next;
        }
        return res;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        int sz = llsize(head);

        int k = k % sz;
        while (k--)
        {
            ListNode *lastsec = head;
            ListNode *last = head;

            while (lastsec->next->next != nullptr)
            {
                last = lastsec->next;
                lastsec->next = nullptr;
                last->next = head;
                head = last;
            }
        }

        return head;
    }
};

int main()
{
}