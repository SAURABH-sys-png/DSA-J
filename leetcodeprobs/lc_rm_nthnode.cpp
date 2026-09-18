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
    int sz(ListNode *&head)
    {
        int x = 0;
        ListNode *tmp = head;

        while (tmp != nullptr)
        {
            tmp = tmp->next;
            x++;
        }

        return x;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        int k = sz(head) - n + 1;
        int itr = 1;
        ListNode *ymp = head;

        if (k == 1)
        {
            head = head->next;
            return head;
        }

        k--;

        while (itr < k)
        {
            ymp = ymp->next;
        }

        ymp->next = ymp->next->next;

        return head;
    }
};

int main()
{
    return 0;
}