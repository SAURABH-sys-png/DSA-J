#include <bits/stdc++.h>
using namespace std;
#define ztn(i, n) for (int i = 0; i < n; i++)
#define ll long long

#define vpid vector<pair<int, int>>

void solve()
{
    int size, cost;
    cin >> size >> cost;
    vpid arr(size);
    for (int i = 0; i < size; i++)
    {
        int tmp;
        cin >> tmp;
        int val = tmp - cost;

        arr[i] = {tmp, val};
    }
    sort(arr.begin(), arr.end());

    int st = 0;
    int end = size - 1;
    ll res = 0;
    while (st < end)
    {
        if (arr[st].second > 0)
            res += arr[st].first + arr[end].first - 2 * cost;
        else
            res += arr[end].first - cost;

        st++;
        end--;
    }

    if (st == end)
        res += arr[st].first - cost;
    cout << res << '\n';
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