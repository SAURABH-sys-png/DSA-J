#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:
    auto sequentialDigits(int low, int high) -> std::vector<int>
    {
        std::vector<int> result;

        for (int length = 2; length <= 9; ++length)
        {
            for (int first = 1; first + length <= 10; ++first)
            {
                int value = 0;

                for (int digit = first; digit < first + length; ++digit)
                {
                    value = value * 10 + digit;
                }

                if (value >= low && value <= high)
                {
                    result.push_back(value);
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;
    std::vector<int> result = sol.sequentialDigits(14, 125);
    std::cout << "Sequential Digits between 14 and 125: ";
    for (int num : result)
    {
        std::cout << num << " " << std::endl;
    }
    return 0;
}