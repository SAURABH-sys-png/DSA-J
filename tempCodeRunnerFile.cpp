#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

vector<int> sum5(vector<int> arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        arr[i] += 5;
    }
    return arr;
}

void sum_reference(vector<int> arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        arr[i] += 5;
    }
    return;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> pass_by_value = sum5(arr);

    for (int x : arr)
    {
        cout << x << '\n';
    }
    sum_reference(arr);

    for (int x : arr)
    {
        cout << x << '\n';
    }

    return 0;
}