#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long get_lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
    }

    int operations = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {

            long long g = gcd(a[0], a[1]);
            if (g < a[0])
            {
                operations++;
            }
        }
        else if (i == n - 1)
        {

            long long g = gcd(a[n - 2], a[n - 1]);
            if (g < a[n - 1])
            {
                operations++;
            }
        }
        else
        {

            long long left_gcd = gcd(a[i - 1], a[i]);
            long long right_gcd = gcd(a[i], a[i + 1]);

            long long required_lcm = get_lcm(left_gcd, right_gcd);

            if (required_lcm < a[i])
            {
                operations++;
            }
        }
    }

    cout << operations << "\n";
}

int main()
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}