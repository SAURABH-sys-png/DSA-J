#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
}

int main()
{
    set<int> s = {1,2,3,4,5,6,7};
    int x = 1;
    auto it = s.lower_bound(x);
    if (it == s.begin())
    {
        cout << *it << "\n";
    }
    else if (it == s.end())
    {
        it--;
        cout << *it << "\n";
    }
    else
    {
        int a = *it;
        it--;
        int b = *it;
        if (x - b < a - x)
            cout << b << "\n";
        else
            cout << a << "\n";
    }

    return 0;
}