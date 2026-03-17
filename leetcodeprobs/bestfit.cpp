#include <iostream>
#include <vector>
#include <unordered_set>
//use of hash tables or hash function using unordered_set
using namespace std; 

int main() {
//Declaring an sample array of size m*n

    vector<vector<int>>somerand(10, vector<int>(23));
    std::unordered_set<int> visited;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 23; j++)
        {
            somerand[i][j] = i+j;
            visited.insert(somerand[i][j]);
        }
        
    }

    cout << "Is 23 in the set? " << visited.count(23) << endl;


    
    return 0;
}