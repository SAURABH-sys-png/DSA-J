#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;
// 2,6,4
class Solution
{
public:
    int numOfSubarrays(vector<int> &arr)
    {
        ll n = arr.size();
        vector<ll> prefum(n);
        prefum[0] = arr[0];
        for (ll i = 1; i < n; i++)
        {
            prefum[i] = prefum[i - 1] + arr[i];
        }

        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll diff = prefum[j] - prefum[i];
                if (diff % 2 != 0)
                {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};

int main()
{

    return 0;
}