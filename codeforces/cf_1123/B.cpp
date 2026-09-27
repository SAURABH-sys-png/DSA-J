#include <bits/stdc++.h>
using namespace std;

int maxi_not_zer(unordered_map<int, int> &mp)
{
    int res = 0;
    bool flag = false;
    for (auto &[key, val] : mp)
    {
        if (val > 0)
        {
            flag = true;
            res = max(res, key);
        }
    }

    if (flag)
        return res;
    return -1;
}
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    vector<int> res;

    while (maxi_not_zer(mp) != -1)
    {
        int cr = maxi_not_zer(mp);
        int cr_len = mp[cr];

        int tmp = cr_len;

        while (tmp--)
        {
            res.push_back(cr);
            mp[cr]--;
        }

        for (auto &[key, val] : mp)
        {
            if (key == cr)
                continue;
            int itr = (val >= cr_len) ? cr_len : val;
            val = (val >= cr_len) ? (val - cr_len) : 0;

            while (itr--)
            {
                res.push_back(key);
            }
        }
    }

    for (auto &x : res)
    {
        cout << x << ' ';
    }
    cout << '\n';
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

    return 0;
}