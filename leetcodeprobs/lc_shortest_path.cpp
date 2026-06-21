#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;



class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        map<char,vector<int>> graph;
        for (int i = 0; i < edges.size(); i++)
        {
            graph[i].push_back(edges[i][1]);
        }

        
    }
};

int main() {
    return 0;
}