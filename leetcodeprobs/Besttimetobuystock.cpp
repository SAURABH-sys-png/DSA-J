#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std; 


class Solution
{
public:
    int maxprofit(vector<int> &prices){
        int size = prices.size();
        

        if(size == 0)return 0;
        int max = 0;
        int min_price = prices[0];

        for (int i = 1; i < size; i++)
        {
            if ((prices[i] - min_price) > max)
            {
                max = prices[i] - min_price;
            }
            if (prices[i] < min_price)
            {
                min_price = prices[i];
            }
            
            
        }
        
        return max;
    }
};




int main() {
    vector<int> arr(23);

    for (int i = 0; i < 23; i++)
    {
        arr[i] = i +1 ;
    }

    Solution sol;

    int maxxprofit = sol.maxprofit(arr);
    cout << "Max Profit: " << maxxprofit << endl;


    class Solution {
    public:
        int firstUniqueEven(vector<int>& nums) {
        multiset<int> sorted_set(nums.begin(),nums.end());
        vector<int> sorted_array(sorted_set.begin(),sorted_set.end());
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if((sorted_array[i]%2)==0){
                bool is_unique = true;
                if((i>0 &&sorted_array[i] == sorted_array[i-1])){
                    is_unique = false;
                }
                if(i < nums.size()-1 && sorted_array[i] == sorted_array[i+1]){
                    is_unique = false;
                }
                if(is_unique){
                    return sorted_array[i];
                }
                
            }
        }

        return -1;

        
    }
};
    
    return 0;
}