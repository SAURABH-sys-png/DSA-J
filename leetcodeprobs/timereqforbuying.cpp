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
    
    return 0;
}