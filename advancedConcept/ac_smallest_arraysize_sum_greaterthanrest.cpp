#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

int main()
{
    fastio
        vector<ll>
            arr = {13, 2, 3, 14, 5};

    ll ptr1 = 0, ptr2 = arr.size() - 1;
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    while (ptr1 <= ptr2)
    {
        if (arr[ptr1] < arr[ptr2])
        {
            sum -= arr[ptr1];
            ptr1++;
        }
        else
        {
            sum -= arr[ptr2];
            ptr2--;
        }
        if (sum > 0)
        {
            cout << (ptr2 - ptr1 + 1) << endl;
            break;
        }
    }

    return 0;
}