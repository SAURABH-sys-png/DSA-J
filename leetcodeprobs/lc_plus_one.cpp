#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main()
{
    vector<int> name;
    for (int i = 0; i < 5; i++)
    {
        name.push_back(i + 9);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << name[i];
    }
    cout << endl;
    vector<int> plusonetwo;

    Solution obj;

    plusonetwo = obj.plusOne(name);
    cout << "Here is " << endl;
    for (int i = 0; i < 5; i++) // size issues
    {

        cout << name[i];
    }
    return 0;
}