#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return nullptr; 
        }

        ListNode* temp = head;
        int n = 0;
        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }

        int steps = (n / 2) - 1;
        temp = head;
        while (steps--) {
            temp = temp->next;
        }

        ListNode* temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;

        return head;
    }
};

void solve()
{
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}