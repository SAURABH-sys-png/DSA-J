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

int main()
{
}