#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // checek for prime

    int it = 2;
    while (it*it <= n)
    {
        if (n % it == 0)
        {
            return false;
        }
        it++;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    n++;
    if (isPrime(n))
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}