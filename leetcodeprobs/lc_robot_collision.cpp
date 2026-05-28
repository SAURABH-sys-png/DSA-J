#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std; 


struct node
{
    int data;
    int id;
    node *next;
    node(int d, int i) : data(d), id(i), next(nullptr) {}
};

node *head = nullptr;

bool isEmpty()
{
    return head == nullptr;
}

void push(int num, int id)
{
    node *newNode = new node(num, id);
    newNode->next = head;
    head = newNode;
}

void pop()
{
    if (isEmpty())
        return;
    node *temp = head;
    head = head->next;
    delete temp;
}

class Solution
{
public:
    vector<int> survivedRobotsHealths(vector<int> &positions, vector<int> &healths, string directions)
    {
        head = nullptr;
        int n = positions.size();

        vector<int> sortedPositions = positions;
        sort(sortedPositions.begin(), sortedPositions.end());

        vector<int> sortedHealths;
        vector<char> sortedDir;
        vector<int> ids;
        unordered_map<int, int> m;
        for (int j = 0; j < n; j++)
            m[positions[j]] = j;
        for (int i = 0; i < n; i++)
        {
            int pos = m[sortedPositions[i]];
            sortedHealths.push_back(healths[pos]);
            sortedDir.push_back(directions[pos]);
            ids.push_back(pos);
        }

        vector<int> finalHealths(n, 0);

        for (int k = 0; k < n; k++)
        {
            if (sortedDir[k] == 'R')
            {
                push(sortedHealths[k], ids[k]);
            }
            else
            {
                bool destroyed = false;
                while (!isEmpty())
                {
                    if (sortedHealths[k] < head->data)
                    {
                        head->data -= 1;
                        destroyed = true;
                        break;
                    }
                    else if (sortedHealths[k] > head->data)
                    {
                        sortedHealths[k] -= 1;
                        pop();
                    }
                    else
                    {
                        pop();
                        destroyed = true;
                        break;
                    }
                }
                if (!destroyed)
                {
                    finalHealths[ids[k]] = sortedHealths[k];
                }
            }
        }

        while (!isEmpty())
        {
            finalHealths[head->id] = head->data;
            pop();
        }

        vector<int> result;
        for (int h : finalHealths)
        {
            if (h > 0)
                result.push_back(h);
        }
        return result;
    }
};
int main() {
    // Problem: robot collision.
    // Time Complexity: O(...) based on Solution::survivedRobotsHealths implementation.
    // Space Complexity: O(...) based on Solution::survivedRobotsHealths implementation.
    Solution obj;
    vector<int> arg1 = {1,2,3,4,5};
    vector<int> arg2 = {1,2,3,4,5};
    string arg3 = "010101";
    auto result = obj.survivedRobotsHealths(arg1, arg2, arg3);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
