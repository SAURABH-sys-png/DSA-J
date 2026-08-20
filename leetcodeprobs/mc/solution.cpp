#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        // way 1 : using two pinters
        // using hash map

        // using hashmap let see;

        unordered_map<int, int> mp;

        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] < target)
            {
                mp[numbers[i]] = i;
            }
        }
        vector<int> res(2);
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] < target)
            {
                int req = target - numbers[i];
                auto it = mp.find(req);
                if (it != mp.end())
                {
                    // means it exists
                    int idx = mp[req];
                    return {i + 1, idx + 1};
                }
            }
        }

        return {1, 2};
    }
};


int main(){
    Solution sl;

    vector<int> arr = {1,23,45,56,78,90};
    int target = 113;

    vector<int> res =  sl.twoSum(arr,target);
    cout << res[0] << res[1] << endl;
    return 0;
    
}