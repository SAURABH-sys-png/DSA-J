#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr) {}
};

void putOnTop(Node *&head, int key)
{
    Node *itr = head;
    if (!head || head->val == key)
    {
        return;
    }
    while (itr->next && itr->next->val != key)
    {
        itr = itr->next;
    }
    if (itr->next)
    {
        Node *target = itr->next;
        itr->next = target->next;
        target->next = head;
        head = target;
    }
    return;
}
class LRUCache
{
public:
    int sz = 0;

    unordered_map<int, int> mp; // key,val
    Node *head = nullptr;
    LRUCache(int capacity) : sz(capacity)
    {
    }

    int get(int key)
    {
        if (mp.find(key) != mp.end())
        {
            // it exists
            putOnTop(head, key);
            return mp[key];
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            // if exist

            putOnTop(head, key);
            mp[key] = value;
            return;
        }
        Node *newnd = new Node(key);
        newnd->next = head;
        head = newnd;

        mp[key] = value;

        if (mp.size() > sz)
        {
            if (!head->next)
            { 
                mp.erase(head->val);
                delete head;
                head = nullptr;
            }
            else
            {
                Node *trmp = head;
                while (trmp->next->next != nullptr)
                {
                    trmp = trmp->next;
                }

                Node *toDelete = trmp->next;
                mp.erase(toDelete->val); // Safely erases existing key
                trmp->next = nullptr;
                delete toDelete; // Avoid memory leak
            }
        }
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main()
{
    return 0;
}