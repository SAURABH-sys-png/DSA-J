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
    ll ans=  0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int r = 0;
    int l = 0;
    set<int> seen;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (seen.empty())
        {
            seen.insert(num);
        }
        else if (seen.count(num))
        {
            while (seen.count(num))
            {
                seen.erase(arr[l]);
                l++;
            }
            seen.insert(num);
        }
        else{
            seen.insert(num);
        }
        ans += r - l + 1;
        r++;
    }

    cout << ans << '\n';
}

int main()
{
    solve();

    return 0;
}