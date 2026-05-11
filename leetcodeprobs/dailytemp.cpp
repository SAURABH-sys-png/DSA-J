#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> res;

        for (int i = 0; i < n - 1; i++)
        {
            int wait = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (temperatures[j] > temperatures[i])
                {
                    wait++;
                    res.push_back(wait);
                    break;
                }
                else if (j == n - 1)
                {
                    res.push_back(0);
                }
                else
                {
                    wait++;
                }
            }
        }
        res.push_back(0);
        return res;
    }
};

int main()
{
    return 0;
}