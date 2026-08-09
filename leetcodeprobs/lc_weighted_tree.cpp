#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void(find_depth(int &h, int node, int d, vector<vector<int>> &adj, vector<int> &depth))
    {
        depth[node] = d;
        h = max(h, d);
        for (int child : adj[node])
        {
            find_depth(h, child, d + 1, adj, depth);
        }
    }
    long long weightedSum(vector<int> &parent, vector<int> &nums)
    {
        int n = parent.size();
        int h = 0;
        vector<vector<int>> adj(n);
        vector<int> depth(n);

        for (int i = 1; i < n; i++)
        {
            adj[parent[i]].push_back(i);
        }

        find_depth(h, 0, 1, adj, depth);
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans+=1LL*nums[i] * (h-depth[i]+1);
        }
        return ans;
        
    }
};
int main()
{
}