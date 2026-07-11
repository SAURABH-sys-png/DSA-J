#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<pair<int, int>> psbt;
    psbt.push_back({n, mp.size()});
    while (mp.size() != 0)
    {
        n=0;
        for (const auto &[key, val] : mp)
        {

            int value = val;
            value--;
            if (value == 0)
            {
                mp.erase(key);
            }
            else
            {
                mp[key] = value;
            }
            n+=value;

        }
        if (mp.size() == 0)
        {
            break;
        }
        psbt.push_back({n, mp.size()});
    }

    int ans = 0;
    for (int i = 0; i < psbt.size(); i++){
        if(psbt[i].first <= k){
            int dif = k-psbt[i].first;
            if (dif%(psbt[i].second==0))
            {
                ans++;
            }
            
        }
    }
    cout<<ans<<'\n';
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