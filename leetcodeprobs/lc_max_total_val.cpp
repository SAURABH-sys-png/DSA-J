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
    int maxTotalValue(vector<int> &value, vector<int> &decay, int m)
    {
        // value[i] = initial value at index i
        // decay[i] = how much value decreasers after each selection
        int n = value.size();

        priority_queue<pair<int, int>> f;

        for (int i = 0; i < n; i++)
        {
            f.push({value[i], decay[i]});
        }

        long long vg = 0;
        const long long M = 1e9 + 7;

        while (m--)
        {
            if (f.empty())
                break;
            auto t = f.top();
            f.pop();

            int l = t.first;
            int k = t.second;

            vg = (vg + l) % M;

            int new_k = l - k;
            int new_d = k;

            if (new_k > 0)
            {
                f.push({new_k, new_d});
            }
        }

        return vg;
    }
};

int main()
{
    return 0;
}