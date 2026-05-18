#include <iostream>


using namespace std; 


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void push(int n,ListNode* &head){
    ListNode* temp = new ListNode(n);
    temp->val = n;
    temp->next = head;
    head = temp;
}

int poped(ListNode* &head){
    int value = 0;
    if(head == nullptr){
        return 0;
    }
    value = head->val;
    head = head->next;
    return value;
}

void reverseList(ListNode* &head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum;
        int carry = 0;
        int result;
        ListNode* l3 = nullptr;
        while(l1 != 0 || l2 != 0){
            sum = poped(l1) + poped(l2) + carry;

            if(sum >= 10){
                carry = sum/10;
                result = sum%10;
                push(result,l3);

            }
            else{
                carry = 0;
                push(sum,l3);
            }
        }
        if (carry > 0) {
            push(carry, l3);
        }

        reverseList(l3);

        return l3;
    }
};

int main() {
    
    return 0;
}