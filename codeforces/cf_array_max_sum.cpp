#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[7];
        scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);

        int max = *max_element(arr, arr + 7);

        int sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6];

        int result = (-1 * sum) + (2 * max);
        cout << result << endl;
    }

    return 0;
}