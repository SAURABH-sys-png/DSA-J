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
    int state(string s)
    {
        string hr = "";
        string minutes = "";
        string sec = "";
        hr.push_back(s[0]);
        hr.push_back(s[1]);
        minutes.push_back(s[3]);
        minutes.push_back(s[4]);
        sec.push_back(s[6]);
        sec.push_back(s[7]);

        int ans = 0;
        ans += (stoi(hr) * 3600 + stoi(minutes) * 60 + stoi(sec));

        return ans;
    }
    int secondsBetweenTimes(string startTime, string endTime)
    {
        int st = state(startTime);
        int end = state(endTime);

        return abs(st - end);
    }
};

int main()
{

    return 0;
}