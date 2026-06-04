#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int wavy(int num)
    {
        vector<int> arr;
        while (num > 0)
        {
            int rem;
            rem = num % 10;
            num = num / 10;
            arr.push_back(rem);
        }
        int res = 0;
        for (size_t i = 1; i < arr.size() - 1; ++i)
        {
            // Check for Peak
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                res++;
            }
            // Check for Valley
            else if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            {
                res++;
            }
        }

        return res;
    }
    int totalWaviness(int num1, int num2)
    {
        // 2 int given to us representing an inclusivce range
        int totalSum = 0;

        for (int i = num1; i <= num2; ++i)
        {
            totalSum += wavy(i);
        }
        return totalSum;
    }
};

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}