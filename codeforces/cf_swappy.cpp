#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;

    vector<pair<int, int>> swp;

    for (int i = 0; i < n;)
    {
        int j = i;
        while (j < n && arr[j] == arr[i])
            j++;

        swp.push_back({arr[i], j - i});
        i = j;
    }

    int m = swp.size();
    int toAdd = 0;

    for (int i = 0; i + 1 < m; i++)
    {
        if (swp[i].second >= 2 && swp[i + 1].second >= 2)
        {
            toAdd = 2;
            break;
        }
    }

    if (toAdd == 0)
    {
        for (int i = 0; i < m; i++)
        {
            if (swp[i].second < 2)
                continue;

            if (i > 0 && (i == 1 || swp[i - 2].first != swp[i].first))
            {
                toAdd = 1;
                break;
            }

            if (i + 1 < m && (i + 2 == m || swp[i + 2].first != swp[i].first))
            {
                toAdd = 1;
                break;
            }
        }
    }

    cout << m + toAdd << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}