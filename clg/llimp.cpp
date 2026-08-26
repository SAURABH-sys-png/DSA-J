#include <bits/stdc++.h>

using namespace std;

struct Node
{
  int val;
  Node *next;
};
class MyLinkedList
{
private:
  Node *head;
  int size;

public:
  MyLinkedList()
  {
    head = nullptr;
    size = 0;
  }

  int get(int index)
  {
    if (index < 0 || index >= size)
    {
      return -1;
    }
    Node *curr = head;
    for (int i = 0; i < index; i++)
    {
      curr = curr->next;
    }
    return curr->val;
  }

  void addAtHead(int val)
  {
    Node *tmp = new Node();
    tmp->val = val;
    tmp->next = head;
    head = tmp;
    size++;
  }

  void addAtTail(int val)
  {
    Node *tmp = new Node();
    tmp->val = val;
    if (!head)
    {
      head = tmp;
    }
    else
    {
      Node *curr = head;
      while (curr->next)
      {
        curr = curr->next;
      }
      curr->next = tmp;
    }
    size++;
  }

  void addAtIndex(int index, int val)
  {
    if (index < 0 || index > size)
    {
      return;
    }
    if (index == 0)
    {
      addAtHead(val);
      return;
    }
    Node *tmp = new Node();
    tmp->val = val;
    Node *curr = head;
    for (int i = 0; i < index - 1; i++)
    {
      curr = curr->next;
    }
    tmp->next = curr->next;
    curr->next = tmp;
    size++;
  }

  void deleteAtIndex(int index)
  {
    if (index < 0 || index >= size)
    {
      return;
    }
    if (index == 0)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
      size--;
      return;
    }
    Node *curr = head;
    for (int i = 0; i < index - 1; i++)
    {
      curr = curr->next;
    }
    Node *tmp = curr->next;
    curr->next = curr->next->next;
    delete tmp;
    size--;
  }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main()
{
  return 0;
}
