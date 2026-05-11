#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
#include <string>

using namespace std;

class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res;

        for (int i = 0; i < n; i++)
        {
            string s = to_string(nums[i]);

            for (int j = 0; j < s.size(); j++)
            {
                int tempo = s[j] - '0';
                res.push_back(tempo);
            }
        }

        return res;
    }
};

int main()
{

    Solution s;
    int num = 9300;

    return 0;
}