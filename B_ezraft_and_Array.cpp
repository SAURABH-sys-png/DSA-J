#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long> generateDistinctDivisors(int n)
{
    if (n <= 0)
        return {};
    if (n == 1)
        return {1};
    if (n == 2)
        return {};

    vector<unsigned long long> sequence = {1, 2, 3};
    unsigned long long current_sum = 6;

    for (int i = 3; i < n; ++i)
    {
        sequence.push_back(current_sum);
        current_sum += current_sum;
    }

    return sequence;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<unsigned long long> result = generateDistinctDivisors(n);
        if (result.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            for (unsigned long long x : result)
            {
                cout << x << " ";
            }
        }
    }
    return 0;
}