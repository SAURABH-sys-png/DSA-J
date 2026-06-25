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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // 1. If Alice owns both the start and the end
    if (s[0] == 'A' && s[n - 1] == 'A')
    {
        cout << "Alice" << endl;
    }
    // 2. If Bob owns both the start and the end
    else if (s[0] == 'B' && s[n - 1] == 'B')
    {
        cout << "Bob" << endl;
    }
    // 3. Mixed boundaries (One starts, the other ends)
    else
    {
        if (s[0] == 'A' && s[n - 1] == 'B')
        {
            // Count how many 'B's exist in total
            int bob_count = 0;
            for (char c : s)
                if (c == 'B')
                    bob_count++;

            if (bob_count > 1)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
        else
        {
            // Alice has n, Bob has 1
            // The game effectively depends on who holds card n-1
            if (s[n - 2] == 'A')
            {
                cout << "Alice\n";
            }
            else
            {
                cout << "Bob\n";
            }
        }
    }
}

// ==========================
// Main
// ==========================

int main()
{
    fastio

        int T = 1;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}