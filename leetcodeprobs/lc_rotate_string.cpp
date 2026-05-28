#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {

        if (s.length() != goal.length())
            return false;

        string sizo = s + s;

        return sizo.find(goal) < sizo.length();
    }
};

int main() {
    // Problem: rotate string.
    // Time Complexity: O(...) based on Solution::rotateString implementation.
    // Space Complexity: O(...) based on Solution::rotateString implementation.
    Solution obj;
    string arg1 = "010101";
    string arg2 = "010101";
    auto result = obj.rotateString(arg1, arg2);
    (void)result;
    std::cout << "Demo executed successfully" << std::endl;
    return 0;
}
