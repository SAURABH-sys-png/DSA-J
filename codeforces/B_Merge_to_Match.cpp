#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    if (n < (2 * m))
    {
        cout << "NO\n";
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ptr1 = 0;
    int ptr2 = 0;

    for (int j = 0; j < m; j++)
    {
        if (ptr1 >= n || a[ptr1] > b[j])
        {
            cout << "NO\n";
            return;
        }

        ptr2 = max(ptr2, ptr1 + 1);
        while (ptr2 < n && a[ptr2] < b[j])
        {
            ptr2++;
        }

        if (ptr2 >= n)
        {
            cout << "NO\n";
            return;
        }
        ptr1++;
        ptr2++;
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}