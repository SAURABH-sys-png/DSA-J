#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr)
{
    // simply reverses the prigin al arr
    int n = arr.size();
    int hf = (n + 1) / 2;
    for (int i = 0; i < hf; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
    return;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    vector<int> indices;
    vector<int> pr; // num and its original index

    int idx = 1;

    for (auto &x : arr)
    {
        if (x == idx)
        {
            idx++;
            continue;
        }
        pr.push_back(x); // num kis index par tha
        indices.push_back(idx);
        idx++;
    }

    reverse(pr);

    for (int i = 0; i < pr.size(); i++)
    {
        int num = pr[i];
        int toidx = indices[i];
        arr[toidx-1] = num;
    }
    // copying the original array to check if it is sorted or not
    vector<int> ori = arr;
    sort(arr.begin(), arr.end());
    if (arr == ori)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
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