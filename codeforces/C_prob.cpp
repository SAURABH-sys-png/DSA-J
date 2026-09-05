#include <bits/stdc++.h>
using namespace std;

int cnt(vector<int> &arr)
{
    int ans = 0;
    int lastOne = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            if (lastOne != -1)
            {
                ans = max(ans, i - lastOne + 1);
            }
            lastOne = i;
        }
        else if (arr[i] == -1)
        {
            lastOne = -1;
        }
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int st_idx = n;
    int end_idx = -1;

    auto print_array = [&]()
    {
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                cout << ' ';
            }
            cout << arr[i];
        }
        cout << '\n';
    };

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
        {
            st_idx = min(st_idx, i);
            end_idx = max(end_idx, i);
        }
    }

    if (st_idx > end_idx)
    {
        // No -1 present in the array
        print_array();
        return;
    }
    else if (st_idx == end_idx)
    {
        // Only one -1 present
        arr[st_idx] = 1;
        int cnt_one = cnt(arr);
        arr[end_idx] = 0;
        int cnt_zero = cnt(arr);

        if (cnt_one >= cnt_zero)
        {
            arr[st_idx] = 1;
        }
        print_array();
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1 && i != st_idx && i != end_idx)
            {
                arr[i] = 0;
            }
        }

        // Test boundary combinations
        arr[st_idx] = 0; arr[end_idx] = 0;
        int cnt_00 = cnt(arr);

        arr[st_idx] = 0; arr[end_idx] = 1;
        int cnt_01 = cnt(arr);

        arr[st_idx] = 1; arr[end_idx] = 1;
        int cnt_11 = cnt(arr);

        arr[st_idx] = 1; arr[end_idx] = 0;
        int cnt_10 = cnt(arr);

        int mx = max({cnt_00, cnt_01, cnt_11, cnt_10});

        if (mx == cnt_00)
        {
            arr[st_idx] = 0;
            arr[end_idx] = 0;
        }
        else if (mx == cnt_01)
        {
            arr[st_idx] = 0;
            arr[end_idx] = 1;
        }
        else if (mx == cnt_11)
        {
            arr[st_idx] = 1;
            arr[end_idx] = 1;
        }
        else
        {
            arr[st_idx] = 1;
            arr[end_idx] = 0;
        }

        print_array();
    }
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