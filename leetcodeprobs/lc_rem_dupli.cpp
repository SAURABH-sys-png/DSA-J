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

// void rmll(ListNode*& head, ListNode*& tmp) {
//     if (head == tmp) {
//         head = head->next;
//         return;
//     }
//     ListNode* itr = head;

//     while (itr->next != tmp) {
//         itr = itr->next;
//     }
//     itr->next = tmp->next;
//     return;
// }

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         unordered_map<int, int> mp;
//         ListNode* tmp = head;

//         while (tmp != nullptr) {
//             int val = tmp->val;
//             mp[val]++;
//             tmp = tmp->next;
//         }

//         ListNode* itr = head;

//         while (itr != nullptr) {
//             int num = itr->val;
//             if (mp[num] > 1) {
//                 rmll(head, itr);
//             }

//             itr = itr->next;
//         }

//         return head;
//     }
// };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        ListNode* curr = head;

        while(curr!=nullptr){
            next = curr->next;
            int numcurr = curr->val;
            int numnext = next->val;
        }
    }
};

int main()
{
    return 0;
}