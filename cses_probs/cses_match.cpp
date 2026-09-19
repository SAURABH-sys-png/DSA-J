#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string S, T;
    cin >> S >> T;
    bool falg = true;
    for (int i = 0; i < n; i++)
    {
        if (S[i] == T[i])
        {
            continue;
        }
        else if (T[i] != '*')
        {
            falg = false;
            break;
        }
    }
    if (falg)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}