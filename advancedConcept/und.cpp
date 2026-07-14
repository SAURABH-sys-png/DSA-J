#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

int main()
{

    fastio;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    cout << "First element: " << *ptr << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Element " << i << ": " << *ptr << endl;
        ptr++;
    }
    return 0;
}