#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> fq_a;
        for (auto ch : ransomNote)
        {
            fq_a[ch]++;
        }

        unordered_map<char, int> fq_b;

        for (auto ch : magazine)
        {
            fq_b[ch]++;
        }

        for (auto &[key, val] : fq_a)
        {
            if (fq_b.find(key) != fq_b.end())
            {
                // means t exists
                if (fq_a[key] < val)
                    return false;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    return 0;
}