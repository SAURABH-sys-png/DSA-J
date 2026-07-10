#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int sum = 15;
    for (int i = 0; i < 4; i++)
    {
        int num;
        cin >> num;
        sum -= num;
    }

    cout << sum;
}

int main()
{
    solve();

    return 0;
}