#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>

using namespace std;

class Solution
{
public:
    int minimumEffort(vector<vector<int>> &tasks)
    {
        int n = tasks.size();
        
        int mini = 0;
        int prefSum = 0;

        sort(tasks.begin(), tasks.end(), [](const vector<int> &a, const vector<int> &b)
             {
                 return a[1] < b[1];
                 // it sorts the matrix based on second element
             });

        for (int i = 0; i < n; i++)
        {
            if (mini == 0)
            {
                mini = tasks[i][1];
                prefSum = tasks[i][0];
            }
            else
            {
                int temp = mini - prefSum;
                if (temp <= tasks[i][1])
                {
                    mini = mini + abs(tasks[i][1] - temp);
                    prefSum = prefSum + tasks[i][0];
                }
                else
                {
                    prefSum = prefSum + tasks[i][0];
                }
            }
        }

        return mini;
    }
};

int main() {
    // Problem: separate digits.
    // Time Complexity: O(...) based on Solution::minimumEffort implementation.
    // Space Complexity: O(...) based on Solution::minimumEffort implementation.
    Solution obj;
    vector<vector<int>> arg1 = {{1,2,3},{4,5,6},{7,8,9}};
    auto result = obj.minimumEffort(arg1);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
