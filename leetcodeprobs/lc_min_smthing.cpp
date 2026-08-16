#include <bits/stdc++.h>

using namespace std;

// just upperbound of a num in the given array

class Solution
{
public:
    int minPenalty(int period, vector<int> &lights, vector<int> &arrivalTime)
    {
        int n = arrivalTime.size();
        sort(lights.begin(), lights.end());
        int res = 0;
        int largest = lights[lights.size() - 1];
        for (int i = 0; i < n; i++)
        {
            int r = arrivalTime[i];
            r = r % period;
            if (r >= largest)
                res += abs(period - r);
        }
        return res;
    }
};
int main()
{
    return 0;
}