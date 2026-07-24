#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

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

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

ll modpow(ll a, ll b, ll mod = MOD)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

ll modinv(ll x, ll mod = MOD)
{
    return modpow(x, mod - 2, mod);
}

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

template <typename T>
int lower(vector<T> &v, T x)
{
    return lower_bound(all(v), x) - v.begin();
}

template <typename T>
int upper(vector<T> &v, T x)
{
    return upper_bound(all(v), x) - v.begin();
}

vector<ll> prefix(vector<ll> &v)
{
    vector<ll> pre(sz(v) + 1, 0);
    for (int i = 0; i < sz(v); i++)
        pre[i + 1] = pre[i] + v[i];
    return pre;
}

int nearest(set<int> &s, int x)
{
    auto it = s.lower_bound(x);
    if (it == s.begin())
        return *it;
    if (it == s.end())
        return *prev(it);
    int a = *it;
    int b = *prev(it);
    return (x - b <= a - x) ? b : a;
}

template <typename T>
void ckmin(T &a, T b)
{
    if (b < a)
        a = b;
}

template <typename T>
void ckmax(T &a, T b)
{
    if (b > a)
        a = b;
}

template <typename T>
void read(vector<T> &v)
{
    for (auto &x : v)
        cin >> x;
}

template <typename T>
void print(vector<T> &v)
{
    for (auto x : v)
        cout << x << ' ';
    cout << endl;
}

int dx4[] = {-1, 0, 1, 0};
int dy4[] = {0, 1, 0, -1};

int dx8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void solve()
{
}

#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution
{

    string getMinRotation(string s)
    {
        if (s.empty())
            return "";
        int n = s.length();
        s += s; 

        int i = 0, j = 1, k = 0;
        while (i < n && j < n && k < n)
        {
            if (s[i + k] == s[j + k])
            {
                k++;
            }
            else
            {
                if (s[i + k] > s[j + k])
                {
                    i += k + 1;
                }
                else
                {
                    j += k + 1;
                }
                if (i == j)
                {
                    j++;
                }
                k = 0; 
            }
        }
        return s.substr(min(i, j), n);
    }

public:
    int minGroups(vector<string> &words)
    {
        unordered_set<string> uniqueGroups;

        for (const string &w : words)
        {
            string E = "", O = "";
            for (int i = 0; i < w.length(); ++i)
            {
                if (i % 2 == 0)
                {
                    E += w[i];
                }
                else
                {
                    O += w[i];
                }
            }
            string minE = getMinRotation(E);
            string minO = getMinRotation(O);
            string canonical = "";
            int e_idx = 0, o_idx = 0;
            for (int i = 0; i < w.length(); ++i)
            {
                if (i % 2 == 0)
                {
                    canonical += minE[e_idx++];
                }
                else
                {
                    canonical += minO[o_idx++];
                }
            }
            uniqueGroups.insert(canonical);
        }

        return uniqueGroups.size();
    }
};
int main()
{
    fastio int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}