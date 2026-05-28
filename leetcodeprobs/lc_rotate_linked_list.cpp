#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        int size = 1;

        while (ptr2->next != NULL) {
            ptr2 = ptr2->next;
            size++;
        }

        int ki = k % size;
        if (ki == 0) return head;

        ptr2->next = head;

        int front = size - ki;
        while (front--) {
            ptr2 = ptr2->next;
        }

        ptr1 = ptr2->next;
        ptr2->next = NULL;

        return ptr1;
    }
};

int main() {
    // Problem: rotate linked list.
    // Time Complexity: O(...) based on Solution::rotateRight implementation.
    // Space Complexity: O(...) based on Solution::rotateRight implementation.
    Solution obj;
    ListNode* arg1 = nullptr;
    int arg2 = 5;
    auto result = obj.rotateRight(arg1, arg2);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
