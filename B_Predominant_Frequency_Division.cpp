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
    vector<int> nums(n);
    vector<int> ones(n);
    int count1 = 0;
    vector<int> two_threes(n);
    int count23 = 0;
    vector<int> one_twos(n);
    int count12 = 0;
    vector<int> threes(n);
    int count3 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (nums[i] == 1)
        {
            count1++;
            ones[i] = count1;
        }
        if (nums[i] == 2 || nums[i] == 3)
        {
            count23++;
            two_threes[i] = count23;
        }
        if (nums[i] == 1 || nums[i] == 2)
        {
            count12++;
            one_twos[i] = count12;
        }
        if (nums[i] == 3)
        {
            count3++;
            threes[i] = count3;
        }
    }

    // 2 1 1 3 3 1 2 3

    // 1  // 0 1 2 2 2 3 3 3
    // 2,3// 1 1 1 2 3 3 4 5
    // 1,2// 1 2 3 3 3 4 5 5
    // 3  // 0 0 0 1 1 0 0 2

    //
}

int just_big_ind(set<int> s, int x)
{
    auto it = s.lower_bound(x);
    if (it == s.begin())
    {
        return *it;
    }
    else if (it == s.end())
    {
        it--;
        return *it;
    }
    else
    {
        int a = *it;
        it--;
        int b = *it;
        if (x - b < a - x)
            return b;
        else
            return a;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}