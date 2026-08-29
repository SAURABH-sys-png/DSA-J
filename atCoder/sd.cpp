#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }

    int res = 0;
    for (auto &[key, val] : mp)
    {
        val = val % 2;
        res += (key * val);
    }

    std::cout << res;
}

int main()
{
    solve();
    return 0;
}
