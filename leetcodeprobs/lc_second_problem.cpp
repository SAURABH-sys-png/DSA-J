#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

#define ll long long
class Solution
{
public:
    int minLights(vector<int> &lights)
    {
        // lights krke array
        int n = lights.size();
        // ith position pe ek value doi hai jisme it is positive
        // max(0,i-v) se lekar min(n-1,i+v) ke bich me illumination dega
        // make use of pair
        vector<pair<int, int>> range(n);
        for (int i = 0; i < n; i++)
        {
            int v = lights[i];
            if (v == 0)
            {
                continue;
            }

            int min_range = max(0, i - v);
            int max_range = min(n - 1, i + v);
            range[i].first = min_range;
            range[i].second = max_range;
        }

        vector<pair<int, int>> not_illuminated;
        if (range.empty())
            return 0;
        sort(range.begin(), range.end());
        int res = 0;
        int current_limit = 0;

        for (const auto &r : range)
        {
            int start = r.first;
            int end = r.second;

            if (start > current_limit)
            {
                // gap found from current_limit to start - 1
                not_illuminated.push_back({current_limit, start - 1});
            }
            current_limit = max(current_limit, end + 1);
        }
        if (current_limit < n)
        {
            not_illuminated.push_back({current_limit, n - 1});
        }

        // now i have a not illuminated pair

        for (const auto &r : not_illuminated)
        {
            int length = r.second - r.first + 1;

            if (length <= 3)
            {
                res++;
            }
            else
            {
                int qt = length / 3;
                int rem = length % 3;

                res += qt;
                if (rem > 0)
                {
                    res++;
                }
            }
        }

        return res;
    }
};

int main()
{

    return 0;
}