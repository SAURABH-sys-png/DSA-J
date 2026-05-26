#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        sort(word.begin(), word.end());
        int n = word.size();
        int count = 0;
        unordered_set<char> seen_uppercase;
        for (char ch : word)
        {
            int char_num = ch;
            if (char_num >= 65 && char_num <= 90)
            {
                seen_uppercase.insert(ch);
            }
            else
            {
                if (seen_uppercase.find(toupper(ch)) != seen_uppercase.end())
                {
                    count++;
                }
            }
        }

        return count;
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