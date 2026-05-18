#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <unordered_map>  
#include <cmath>
#include <string>
#include <map>


using namespace std; 

class Solution {
public:
    long long cube(int a){
            return (long long)a*a*a;
    }
    vector<int> findGoodIntegers(int n) {
        
        vector<int> result;
        int i = 1;
        unordered_set<long long> main;
        while((cube(i)+cube(i))<=n){
            int j = i;
            while((cube(i)+cube(j))<=n){
                if(main.contains(cube(i)+cube(j))){
                    result.push_back(cube(i)+cube(j));
                }
                else{
                    main.insert(cube(i)+cube(j));
                }
                j++;
            }
            i++;
        }
        sort(result.begin(),result.end());

        for (int i = 0; i < result.size(); i++)
        {
            cout<<result[i]<<" ";
        }
        

        return result;
        
    }
};

int main() {
    Solution sol;

    sol.findGoodIntegers(817727554);
    return 0;
}