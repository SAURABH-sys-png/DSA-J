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

class Solution
{
private:
    static const int MOD = 1e9 + 7;

    long long power(long long base, long long exp)
    {
        long long res = 1;
        base %= MOD;
        while (exp > 0)
        {
            if (exp % 2 == 1)
                res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }

    long long modInverse(long long n)
    {
        return power(n, MOD - 2);
    }

    long long nCr(int n, int r, const vector<long long> &fact, const vector<long long> &invFact)
    {
        if (r < 0 || r > n)
            return 0;
        return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
    }

public:
    int countValidSequences(int n, int k)
    {
        // dp cses qs 2
        // 0 1 2 3
        // 0 0 0

        if (k > n)
            return 0;

        vector<long long> fact(n + 1), invFact(n + 1);
        fact[0] = 1;
        invFact[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        invFact[n] = modInverse(fact[n]);
        for (int i = n - 1; i >= 1; i--)
        {
            invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
        }

        long long total = nCr(n - 1, k - 1, fact, invFact);

        long long all_odd = 0;
        if ((n - k) % 2 == 0)
        {
            int m = (n - k) / 2;
            all_odd = nCr(m + k - 1, k - 1, fact, invFact);
        }

        long long ans = (total - all_odd + MOD) % MOD;
        return ans;
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