#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxEqualAdjacentPairs(vector<int> &nums)
    {
        vector<int> selunaviro = nums;
        int n = selunaviro.size();
        if (n <= 1)
            return 0;

        map<int, int> self;
        map<pair<int, int>, int> diff;
        int same = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int a = selunaviro[i];
            int b = selunaviro[i + 1];

            if (a == b)
            {
                self[a]++;
                same++;
            }
            else
            {
                diff[{min(a, b), max(a, b)}]++;
            }
        }

        int ans = same;

        for (auto &[p, cnt] : diff)
        {
            int x = p.first;
            int y = p.second;

            int cur = self[x] + self[y] + cnt;
            ans = max(ans, cur);
        }

        return ans;
    }
};