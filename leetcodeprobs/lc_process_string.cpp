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
    char processStr(string s, long long k)
    {
        long long n = s.size();
        vector<ll> prefix_size;
        ll ini_size = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                ini_size++;
            }
            else if (s[i] == '*')
            {
                if (ini_size != 0)
                {
                    ini_size--;
                }
            }
            else if (s[i] == '#')
            {
                ini_size *= 2;
            }
            prefix_size.push_back(ini_size);
            if (ini_size > k + 1)
            {
                break;
            }
        }

        if (k >= ini_size || ini_size == 0)
            return '.';

        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                ini_size--;
                if (k == ini_size)
                {
                    return s[i]; 
                }
            }
            else if (s[i] == '*')
            {

                ini_size++;
            }
            else if (s[i] == '#')
            {
                ini_size /= 2;
                if (k >= ini_size)
                {
                    k %= ini_size; 
                }
            }
            else if (s[i] == '%')
            {

                k = ini_size - 1 - k;
            }
        }

        return '.';
    }
};

int main()
{

    return 0;
}