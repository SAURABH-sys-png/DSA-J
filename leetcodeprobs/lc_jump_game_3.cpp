#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        
        if (arr[start] == 0) {
            return true;
        }
        
        queue<int> q;
        unordered_set<int> visited;
        
        q.push(start);
        visited.insert(start);
        
        while (!q.empty()) {
            int levelSize = q.size();
            
            for (int i = 0; i < levelSize; i++) {
                int curr = q.front();
                q.pop();
                
                int nextForward = curr + arr[curr];
                int nextBackward = curr - arr[curr];
                
                if (nextForward >= 0 && nextForward < n) {
                    if (arr[nextForward] == 0) {
                        return true;
                    }
                    if (visited.find(nextForward) == visited.end()) {
                        visited.insert(nextForward);
                        q.push(nextForward);
                    }
                }
                
                if (nextBackward >= 0 && nextBackward < n) {
                    if (arr[nextBackward] == 0) {
                        return true;
                    }
                    if (visited.find(nextBackward) == visited.end()) {
                        visited.insert(nextBackward);
                        q.push(nextBackward);
                    }
                }
            }
        }
        
        return false;
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {4, 2, 3, 0, 3, 1, 2};
    int start1 = 5;
    cout << "Test 1: " << (sol.canReach(arr1, start1) ? "true" : "false") << endl;
    
    vector<int> arr2 = {3, 0, 2, 1, 2};
    int start2 = 2;
    cout << "Test 2: " << (sol.canReach(arr2, start2) ? "true" : "false") << endl;
    
    vector<int> arr3 = {0, 1, 2, 3};
    int start3 = 0;
    cout << "Test 3: " << (sol.canReach(arr3, start3) ? "true" : "false") << endl;
    
    vector<int> arr4 = {0};
    int start4 = 0;
    cout << "Test 4: " << (sol.canReach(arr4, start4) ? "true" : "false") << endl;
    
    vector<int> arr5 = {1, 1, 1, 1};
    int start5 = 0;
    cout << "Test 5: " << (sol.canReach(arr5, start5) ? "true" : "false") << endl;
    
    return 0;
}