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
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> sortedArr(arr.begin(), arr.end());
        sort(sortedArr.begin(), sortedArr.end());

        unordered_map<int, int> mp;
        int rank = 1;
        for (int i = 0; i < n; i++)
        {
            if (!(mp.find(sortedArr[i]) != mp.end()))
            {
                mp[sortedArr[i]] = rank;
                rank++;
            }
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = mp[arr[i]];
        }

        return ans;
    }
};

int main()
{

    Solution sol;
    vector<int> arr = {40, 10, 20, 30};
    vector<int> ans = sol.arrayRankTransform(arr);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}