#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool consecutiveSetBits(int n)
    {
        int count = 0;
        
        // Count all occurrences of consecutive set bits (11 in binary)
        while (n > 0)
        {
            if ((n & 3) == 3)  // Check if last 2 bits are "11"
            {
                count++;
            }
            n >>= 1;  // Right shift by 1 to check next pair
        }
        
        return count == 1;  // Return true only if exactly one pair
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    

    return 0;
}