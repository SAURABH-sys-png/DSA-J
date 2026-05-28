#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int minFlips(string s)
    {
        // binary stinerg is given
        // dp

        int czero = 0;
        int cone = 0;
        int n = s.size();
        int res = -1;

        for (int i = 0; i < s.size(); i++)
        {
            char ith = s[i];
            if (ith == '1')
            {
                cone++;
            }
            else
            {
                czero++;
            }
        }

        if (s[0] == '1' && s[n - 1] == '1')
        {
            cone = cone - 2;
            if (cone < czero)
            {
                res = cone;
                return res;
            }
            else
            {
                res = czero;
                return res;
            }
        } // condition one front is 1 and end is also 1

        else if (s[0] == '0' && s[n - 1] == '0')
        {
            if (cone == 0)
                return 0;
            else if (czero == 2)
            {
                return 2;
            }
            else if (cone == 1)
                return 0;
            else if (cone == czero)
                return 1;
            else if (cone > (czero - 2))
            {
                res = czero - 2;
                return res;
            }
            else if (cone < (czero - 2))
            {
                res = cone - 1;
            }
        } // caser 2 zeros on the ends

        else
        {
            if (cone > czero)
            {
                res = czero;
                return res;
            }
            else
            {
                res = cone - 1;
            }
        }

        return res;
    }
};
int main() {
    // Problem: alternating binary string.
    // Time Complexity: O(...) based on Solution::minFlips implementation.
    // Space Complexity: O(...) based on Solution::minFlips implementation.
    Solution obj;
    string arg1 = "010101";
    auto result = obj.minFlips(arg1);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
