#include <iostream>
#include <stack>

using namespace std; 

//declaring th elinked list

struct node{
    char data;
    node* next;
};

node* head = nullptr;

//operations over the linked list
void push(node* &head,char s){
    node* temp = new node();
    temp->data = s;
    temp->next = head;
    head = temp;
}
void pop(node*& head) {
    if (head == nullptr) return;
    node* temp = head;
    head = head->next;
    delete temp; // Use delete with new
}

//related to parenthesis



//code
class Solution {
public:

    bool isMatching(char open, char close) {
        if (open == '(' && close == ')') return true;
        if (open == '{' && close == '}') return true;
        if (open == '[' && close == ']') return true;
        return false;
    }

    bool isValid(string s) {
        node* head = nullptr;


        int size = s.length();

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                push(head, c);
            } 
            else {
                if (head == nullptr) return false;
                if (isMatching(head->data, c)) {
                    pop(head);
                } else {
                    return false;
                }
            }
        }

        bool result = (head == nullptr);
        
        while(head != nullptr) pop(head);
        
        return result;
    }
};

int main() {
    
    return 0;
}