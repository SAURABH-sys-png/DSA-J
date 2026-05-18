#include <vector>
#include <string>
#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 3 == 0)
        {
            count++;
        }
        else
        {
            a.push_back(x);
        }
    }
    if (a.size() == 0)
    {
        cout << count;
    }
    else
    {
        int ptr1 = 0;
        int ptr2 = 0;
        int sum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            sum = sum + a[i];
            if (sum % 3 == 0)
            {

                count++;
                sum = 0;
            }
        }
        cout << count << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}