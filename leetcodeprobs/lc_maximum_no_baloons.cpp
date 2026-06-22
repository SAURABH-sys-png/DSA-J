#include <bits/stdc++.h>
#define ll long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(NULL);
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        vector<int> cnt(26, 0);

        for (char c : text)
            cnt[c - 'a']++;

        return min({cnt['b' - 'a'],
                    cnt['a' - 'a'],
                    cnt['l' - 'a'] / 2,
                    cnt['o' - 'a'] / 2,
                    cnt['n' - 'a']});
    }
};

int main()
{

    return 0;
}