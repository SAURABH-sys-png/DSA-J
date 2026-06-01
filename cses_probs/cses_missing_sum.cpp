#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> all_posi(vector<ll> &nums)
{
    vector<ll> res = {0};
    

    for (ll num : nums)
    {
        ll current_size = res.size();
        for (ll i = 0; i < current_size; i++)
        {
            res.push_back(res[i] + num);
        }

        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
    }

    if (res.empty() && res[0] == 0)
    {
        res.erase(res.begin());
    }

    return res;
}
void solve(ll n)
{
    vector<ll> res(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> res[i];
    }

    sort(res.begin(),res.end());
    ll current_sum = 1;
    for (ll i = 0; i < n; i++)
    {
        if(res[i] <= current_sum){
            current_sum = current_sum + res[i];
        }
        else{
            break;
        }
    }

    cout << current_sum << "\n";
    
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll n;
    cin >> n;
    solve(n);

    return 0;
}