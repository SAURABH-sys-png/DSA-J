#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
    {
        // check for the clsest line
        int minix = min({abs(x1 - xCenter), abs(x2 - xCenter)});
        int miniy = min({abs(y1 - yCenter), abs(y2 - yCenter)});

        if ((yCenter >= y1 && yCenter <= y2) && (xCenter >= x1 && xCenter <= x2))
        {
            return true; // if in the centree
        }
        else if ((yCenter >= y1 && yCenter <= y2))
        {
            if (minix <= radius)
                return true;
        }
        else if ((xCenter >= x1 && xCenter <= x2))
        {
            if (miniy <= radius)
                return true;
        }
        else
        {
            int closestX = (xCenter < x1) ? x1 : x2;
            int closestY = (yCenter < y1) ? y1 : y2;
            int dx = closestX - xCenter;
            int dy = closestY - yCenter;

            return dx * dx + dy * dy <= radius * radius;
        }
    }
};

int main()
{
    return 0;
}