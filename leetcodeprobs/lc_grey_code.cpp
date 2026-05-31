#include <bits/stdc++.h>

using namespace std;



class Solution
{
public:
    vector<int> grayCode(int n)
    {
        long long f_num = 1LL << n;

        for (long long i = 0; i < f_num; i++)
        {
            long long g = i ^ (i >> 1);

            string s = bitset<16>(g).to_string();
            cout << s.substr(16 - n) << "\n";
        }
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

    Solution S;
    vector<int> my = S.grayCode(4);
    for (int i : my)
    {
        cout << i << "\n";
    }

    return 0;
}