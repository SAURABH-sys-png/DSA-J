#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int temp = n;

        vector<int> arr;

        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                arr.push_back(2);
            }
            else if (temp == 2)
            {
                arr.push_back(1);
            }
            else
            {
                arr.push_back(temp);
                temp--;
            }
        }

        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }



    return 0;
}