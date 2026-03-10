#include <iostream>

using namespace std; 


  //Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = head;
        ListNode* temp = head;
        while(temp != 0){
            temp = temp->next;

            if(temp == 0){
                return head;
            }
            else if(temp->val == prev->val){
                prev->next = temp->next;
                temp = prev;

            }
            else{
                prev = temp;
            }
        }
        return head;
    }

};

void push(ListNode* &head,int x){
    ListNode* temp = new ListNode(x);
    
    temp->next = head;
    head = temp;
}
void printing(ListNode* head){
    ListNode* tem = head;
    while (tem!=0)
    {
        cout << tem->val << endl;
        tem = tem->next;
    }
    
}

int main() {
    Solution sol;

    ListNode* head = nullptr;

    push(head,1);
    push(head,1);
    push(head,1);
    push(head,4);
    push(head,4);
    push(head,6);
    push(head,9);
    push(head,10);


    printing(head);

    sol.deleteDuplicates(head);

    cout << "SORTED + NON DUBLICATE LIST" << endl;
    printing(head);


    return 0;
}