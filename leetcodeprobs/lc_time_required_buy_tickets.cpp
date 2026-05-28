#include <iostream>
#include <vector>

using namespace std; 





class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;

        while(tickets[k]!=0){
            for(int i = 0; i<tickets.size() ; i++){

                if(tickets[i] != 0){
                    time = time + 1;
                    tickets[i] = tickets[i]-1;
                }
                if(i == k && tickets[k] == 0)return time;
            }
        }

        return time;
        
    }
};

int main() {
    // Problem: time required buy tickets.
    // Time Complexity: O(...) based on Solution::timeRequiredToBuy implementation.
    // Space Complexity: O(...) based on Solution::timeRequiredToBuy implementation.
    Solution obj;
      = {1,2,3,4,5};
    int arg2 = 5;
    auto result = obj.timeRequiredToBuy(arg1, arg2);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
