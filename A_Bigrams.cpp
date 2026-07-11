#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int count_2 = 0;
    bool flag = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
        if (nums[i] >= 3)
        {
            flag = true;
        }
        if (nums[i] == 2)
        {
            count_2++;
        }
    }

    if (flag || count_2 >= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}