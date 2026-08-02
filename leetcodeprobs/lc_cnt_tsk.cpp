#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Input: tasks = [4,2], shifts = [3,6,1]

// Output: [2,0,2]

class Solution
{
public:
    vector<int> countTasks(vector<int> &tasks, vector<int> &shifts)
    {
        int n = tasks.size();
        vector<int> ans;
        int idx = 0;
        int done = 0;
        for (int x : shifts)
        {
            while (idx < n && x > 0)
            {
                int nd = tasks[idx] - done;
                if (x >= nd)
                {
                    x -= nd;
                    idx++;
                    done = 0;
                }
                else
                {
                    done += x;
                    x = 0;
                }
            }
            if (idx == n)
            {
                ans.push_back(0);
                idx = 0;
                done = 0;
            }
            else
                ans.push_back(n - idx);
        }
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}