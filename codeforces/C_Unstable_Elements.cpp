#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int ans = 0;
    int n, k;
    cin >> n >> k;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        mp[num]++; // Increment the frequency for this number
    }

    while (mp.size() != 0)
    {
        if (n == k)
        {
            ans++;
        }
        else if (k > n)
        {
            int unq_keys = mp.size();
            int diff = k - n;
            if (diff % unq_keys == 0)
            {
                n = 0;
                int fc = diff / unq_keys;
                for (auto &[key, value] : mp)
                {
                    value += fc;
                    n += value;
                }
            }
            else
            {
                for (auto it = mp.begin(); it != mp.end();)
                {
                    it->second--; // Decrement val
                    n--;          // Decrement total count

                    if (it->second == 0)
                    {
                        it = mp.erase(it); // Erases and advances to the next element
                    }
                    else
                    {
                        ++it; // Only advance manually if we didn't erase
                    }
                }
            }
        }
        else
        {
            for (auto it = mp.begin(); it != mp.end();)
            {
                it->second--; // Decrement val
                n--;          // Decrement total count

                if (it->second == 0)
                {
                    it = mp.erase(it); // Erases and advances to the next element
                }
                else
                {
                    ++it; // Only advance manually if we didn't erase
                }
            }
        }
        
    }

    cout << ans << '\n';

    // i have the freq of each leement
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