#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> towers;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        auto it = upper_bound(towers.begin(), towers.end(), num); // to find  the just biggest vale

        if (it == towers.end())
        { // if not found

            towers.push_back(num);
        }
        else
        { // if found

            *it = num;
        }
    }

    cout << towers.size() << "\n";

    return 0;
}