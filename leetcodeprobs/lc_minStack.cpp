#include <bits/stdc++.h>
using namespace std;




class MinStack {
private:
    vector<int> arr;
    vector<int> dp;
    int mini = INT_MAX;

public:

    MinStack() {   
    }
    
    void push(int value) {
        arr.push_back(value);
        mini = min(mini,value);
        dp.push_back(mini);      
    }
    
    void pop() {
        arr.pop_back();
        dp.pop_back();
    }
    
    int top() {
        int end = arr.size();
        return arr[end-1];    
    }
    
    int getMin() {
        int end = arr.size();
        return dp[end-1];    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(){
    return 0;
}