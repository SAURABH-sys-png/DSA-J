#include <bits/stdc++.h>
using namespace std;

// ==========================
// Type Aliases
// ==========================
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;

// ==========================
// Constants
// ==========================
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);

// ==========================
// Macros
// ==========================
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define sz(x) (int)(x).size()

// Loops
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)

// ==========================
// Helper Functions
// ==========================

ll gcdll(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcmll(ll a, ll b)
{
    return a / gcdll(a, b) * b;
}

ll power(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

ll modPower(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

// ==========================
// Debug (Remove before submit if desired)
// ==========================
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

// ==========================
// Solve Function
// ==========================

class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n = nums.size();
        long long tSum = 0;
        sort(nums.begin(),nums.end());
        int idx = n-1;
        while (k--)
        {
            long long temp;
            if (mul>0)
            {
                temp = mul*nums[idx];
            }
            else{
                temp = nums[idx];
            }
            tSum+=temp;
            idx--;
            mul--;
        }
        return tSum;
    }
};

// ==========================
// Main
// ==========================

int main()
{

    return 0;
}