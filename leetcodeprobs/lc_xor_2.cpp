#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define endl '\n'
const ll INF = 1e18;
const int INF_INT = 1e9;
const int MOD = 1e9 + 7;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
class Solution
{
public:
    int uniqueXorTriplets(vector<int> &nums)
    {
        // burte force
        // set<int> mySet;
        // int n = nums.size();
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i; j < n; j++)
        //     {
        //         for (int k = j; k < n; k++)
        //         {
        //             mySet.insert((nums[i]) ^ (nums[j]) ^ (nums[k]));
        //         }
        //     }
        // }
        // return mySet.size();

        // A bit optimised way

        int n = nums.size();
        vector<int> first;
        first.push_back(0);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                first.push_back(nums[i] ^ nums[j]);
            }
        }
        sort(first.begin(), first.end());
        first.erase(unique(first.begin(), first.end()), first.end());
        set<int> res;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < first.size(); j++)
            {
                res.insert(nums[i] ^ first[j]);
            }
        }

        return res.size();
    }
};

int main()
{
    return 0;
}