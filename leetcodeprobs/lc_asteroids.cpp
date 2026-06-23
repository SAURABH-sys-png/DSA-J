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
    bool asteroidsDestroyed(int mass, vector<int> &asteroids)
    {
        sort(asteroids.begin(), asteroids.end());
        for (int num : asteroids)
        {
            if (mass >= num)
            {
                mass = mass + num;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{

    return 0;
}