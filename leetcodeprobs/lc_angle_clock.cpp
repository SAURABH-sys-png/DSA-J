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
    double angleClock(int hour, int minutes)
    {
        double ans;
        // each minute accounts for 6degree or 360/60
        // hour ko 30degree ke respect me convert marna opadega
        double point_hour = static_cast<double>(hour);
        double pint_minutes = static_cast<double>(minutes);
        double point_deg = pint_minutes/60.0;
        double hour_state = point_hour+ point_deg;
        hour_state = hour_state * 5;
        hour_state = fmod(hour_state, 60.0);
        double diff = abs(pint_minutes - hour_state);

        double degree = diff * 6;
        double diff_degree = 360.0 - degree;

        degree = min(degree, diff_degree);

        return degree;
    }
};

int main()
{

    return 0;
}