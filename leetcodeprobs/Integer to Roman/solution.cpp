#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // num:strint

    // 1000 -> M
    // 900 -> CM
    // 500 ->D
    // 400 -> CD
    // 100 -> C
    // 90 -> XL
    // 50 -> L
    // 40 -> XL
    // 10 -> X
    // 9 ->IX
    // 5 -> V
    // 1 -> I

    string intToRoman(int num)
    {
        vector<pair<int, string>> setting = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}};
        string res = "";

        for (const auto &[number, str] : setting)
        {
            while (num >= number)
            {
                res += str;
                num -= number;
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    int num = 1994; // Example input
    string roman = sol.intToRoman(num);
    cout << "The Roman numeral for " << num << " is: " << roman << endl;
    return 0;
}