#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

vector<int> fibo(int num)
{
    vector<int> res;
    res.push_back(0);
    res.push_back(1);

    while (true)
    {
        int next = res[res.size() - 1] + res[res.size() - 2];
        if (next > num)
        {
            break;
        }
        res.push_back(next);
    }

    return res;
}

int main()
{
    int num;
    cin >> num;

    vector<int> fibo_series = fibo(num);

    int count = 0;
    int index_i = fibo_series.size() - 1;

    for (int i = fibo_series.size() - 1; i > 0; i--)
    {
        while (num - fibo_series[i] >= 0)
        {
            num = num - fibo_series[i];
            count++;
        }
        if(num == 0){
            break;
        }
    }

    cout << count << "\n";

    return 0;
}