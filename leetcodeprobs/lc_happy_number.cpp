#include <iostream>

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        int isValid[3] = {1, 7, 10};
        int temp = n;

        int iniSum = 0;
        int rem;

        while (n <= 10)
        {
            while (n != 0)
            {
                rem = n % 10;
                iniSum = iniSum + (rem * rem);
                n = n / 10;
            }
            n = iniSum;
        }
    }
};

int main()
{
    Solution s;

    int n = 19;
    bool result = s.isHappy(n);
    cout << result << endl; 
    return 0;
}