#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> mp;
    vector<int> arr(n);

    
    for (auto &x : arr)
    {
        cin >> x;
        mp[x]++;
    }

    sort(arr.begin(), arr.end());

    // find the first occurence of that num

    int res = 0;

    for (int i = 1; i <= m; i++)
    {
        // get the index of the first number greater than or equal to i
        int idx = lower_bound(arr.begin(), arr.end(), i) - arr.begin();

        int ups = n - idx;
        // if 2 times the num exists return its index then not
        int tx = 2 * i;
        if (mp.find(tx) != mp.end())
        {
            ups += mp[tx];
        }
        res = max(res, ups);
    }
    cout << res << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}