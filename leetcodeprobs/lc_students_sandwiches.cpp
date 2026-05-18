#include <iostream>
#include <vector>


using namespace std; 


struct Myqueue{
    int size;
    int count;
    int f;
    int r;
    vector<int> arr;
};

void dequeue(Myqueue &q) {
    q.f = (q.f + 1) % q.size;
}
struct Mystack {
    int size; 
    int top;
    vector<int> arrOfStack;
};
void pop(Mystack &s) {
    s.arrOfStack.pop_back(); 
    s.size--;
    
}
bool hasmore(Mystack &s) { 
    return s.size != 0;
}
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        Myqueue q;
        Mystack s;

        q.arr = students;
        s.arrOfStack = vector<int>(sandwiches.rbegin(), sandwiches.rend());

        q.f = 0;
        q.r = students.size()-1;
        q.size = students.size();
        q.count = students.size();
        int rotationsWithoutEating = 0;

        s.top = 0;
        s.size = sandwiches.size();

        while (hasmore(s)) {
            
            if (q.arr[q.f] == s.arrOfStack.back()) {
                q.arr[q.f] = -1; 
                dequeue(q);
                pop(s);
                q.count--;
                rotationsWithoutEating = 0;
            } else {
                dequeue(q);
                rotationsWithoutEating++;
            }

            
            while (q.count > 0 && q.arr[q.f] == -1) {
                dequeue(q);
            }

            
            if (rotationsWithoutEating >= q.count && q.count > 0) {
                break;
            }
        }

        return q.count;


        




    }
};


int main() {
    
    return 0;
}