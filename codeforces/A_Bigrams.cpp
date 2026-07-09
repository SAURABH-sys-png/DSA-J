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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 3)
        {
            cout << "YES" << '\n';
            return;
        }
        else if (nums[i] == 2)
        {
            count++;
        }
    }

    if (count >= 2)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    // n is the total type of cards
    // nums holds the freq of each character
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