#include <iostream>
#include <vector>

using namespace std;

// Global variables for simplicity in this example
int n = 4;                 // We want to generate subsets for {0, 1, 2, 3}
vector<int> subset;        // Keeps track of the current subset

void search(int k) {
    // BASE CASE: If k equals n, we have made a decision for all elements (0 to n-1)
    if (k == n) {
        // Process subset: in this case, we just print it
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}\n";
    } 
    // RECURSIVE CASE: Make choices for the element 'k'
    else {
        // Choice 1: EXCLUDE 'k' from the subset
        search(k + 1);
        
        // Choice 2: INCLUDE 'k' in the subset
        subset.push_back(k);
        search(k + 1);
        
        // Backtracking: Remove 'k' to restore the state for previous calls
        subset.pop_back();
    }
}

int main() {
    cout << "All subsets of {0, 1, 2, 3}:\n";
    
    // Start the search from the first element (index 0)
    search(0);
    
    return 0;
}