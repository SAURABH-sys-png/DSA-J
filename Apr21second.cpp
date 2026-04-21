#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cmath>

using namespace std;

string change(string name, int index)
{
    if (name[index] == 'a')
    {
        name[index] = 'b';
    }
    else
    {
        name[index] = 'a';
    }

    return name;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string cinput;
        cin >> cinput;
        // i took the computer input stored it into a string named cinput
        int l = cinput.size();
        int count = 0;
        bool flag = false;
        bool flag2 = true;
        for (int i = 0; i < l - 1; i++)
        {
            if ((cinput[i] == cinput[i + 1]) && count == 0)
            {
                flag = true;
                cinput = change(cinput, i + 1);
                count++;
            }
            else if (flag && (cinput[i] != cinput[i + 1]))
            {
                flag = false;
            }
            else if ((cinput[i] == cinput[i + 1]) && flag)
            {
                cinput = change(cinput, i + 1);
            }
            else if ((cinput[i] == cinput[i + 1]) && (!(flag) && count > 0))
            {
                cout << "NO" << endl;
                flag2 = false;
                break;
            }
        }
        if (flag2)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}