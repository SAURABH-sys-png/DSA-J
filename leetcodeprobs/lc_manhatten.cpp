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
    int maxDistance(string moves)
    {
        int x = 0;
        int y = 0;
        int n = moves.size();
        int up = 0;
        int down = 0;
        int left = 0;
        int right = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (moves[i] == 'L')
            {
                left++;
            }
            else if (moves[i] == 'R')
            {
                right++;
            }
            else if (moves[i] == 'U')
            {
                up++;
            }
            else if (moves[i] == 'D')
            {
                down++;
            }
            else
            {
                count++;
            }
        }
        x = abs(right - left) + count;
        y = abs(up - down);

        return x + y;
    }
};

int main()
{

    return 0;
}