#include <bits/stdc++.h>
using namespace std;

int main()
{
    int st;
    cin >> st;
    while (st > 0)
    {
        for (int i = 0; i < st; i++)
        {
            cout << "* ";
        }
        cout << endl;
        st -= 2;
    }
}