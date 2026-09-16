#include <bits/stdc++.h>
using namespace std;

// prepare a array of size exactly m and it is actually sorted now everytime when we want to have minimum sum before m+ithe num we simply try to place b
void findMinSum(vector<int> &arr, int num, long long &sum) // arrray ki length is m and it is sorted
{
    // find the right position fore the num
    // sum is the sum of arr eleemnts

    // just checek if it is lesser than the highest element in the array
    if (num < arr[arr.size() - 1])
    {
        // finding the just bigger nums index to given num
        int pos = lower_bound(arr.begin(), arr.end(), num) - arr.begin();
        sum -= arr[pos];
        sum += num;
        // now we need to remove the highest element from the array and add the num in the array
        arr[pos] = num;
    }
    else
    {
        return;
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    // fingding minimum posible sum behind m star bm+i
    long long sum = 0;
    vector<int> b(m);

    for (int i = 0; i < m - 1; i++)
    {
        sum += arr[i];
        b[i] = arr[i];
    }

    sort(b.begin(), b.end());

    long long ans = sum;
    for (int i = m; i < n; i++)
    {
        findMinSum(b, arr[i-1], sum);
        long long lt = m * arr[i] - sum;
        ans = max(ans, lt);
    }

    cout << ans << '\n';
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