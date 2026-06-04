#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n)
{
    vector<ll> arr(n);
    iota(arr.begin(), arr.end(), 1);
    ll ind = 1; // start from child 2

    while (!arr.empty())
    {
        cout << arr[ind] << " ";

        arr.erase(arr.begin() + ind);

        if (arr.empty())
            break;

        ind = (ind + 1) % arr.size();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        solve(n);
    }
}