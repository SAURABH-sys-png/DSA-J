#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    

    long long diff = abs(x1 - x2);
    if (n % 2 == 0 && diff == n / 2)
    {
        diff--;
        cout << diff + k<< endl;
    }
    else
    {
        long long dis = min(diff, n - diff);
        cout << dis + k  << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}