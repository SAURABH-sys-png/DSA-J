#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll N, M, K;
    cin >> N >> M >> K;
    ll JnNcoins, JnMbillsK;
    cin >> JnNcoins >> JnMbillsK;
    ll amount_bills = K * JnMbillsK;
    ll coins_amnt = JnNcoins;
    vector<ll> cost_desserts(N);
    vector<ll> cost_drinks(M);

    ll res = 0;

    for (auto &x : cost_desserts)
        cin >> x;

    for (auto &x : cost_drinks)
    {
        cin >> x;
    }

    

}

int main()
{
    solve();
    return 0;
}