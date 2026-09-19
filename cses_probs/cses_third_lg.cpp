#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> ans;

    int largest = INT_MIN;
    int mid = INT_MIN;
    int rs = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= largest)
        {
            rs = max(rs, mid);
            mid = max(mid, largest);
            largest = max(largest, x);
        }
        else if (x < largest && x >= mid)
        {
            rs = max(rs, mid);
            mid = x;
        }
        else if (x < mid && x >= rs)
        {
            rs = max(rs, x);
        }

        if (i >= 2)
        {
            ans.push_back(rs);
        }
    }

    for(auto&x : ans){
        cout << x << '\n';
    }
    return;
}

int main()
{
    solve();
    return 0;
}