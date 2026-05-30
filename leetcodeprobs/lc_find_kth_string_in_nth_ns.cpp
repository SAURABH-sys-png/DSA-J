#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void invert(string &str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            char ith = str[i];
            if (ith == '0')
            {
                str[i] = '1';
            }
            else
            {
                str[i] = '0';
            }
        }
    }

    string fn(int n)
    {
        string ans = "";
        if (n == 1)
        {
            ans = "0";
        }
        else
        {
            string tempo = fn(n - 1);
            invert(tempo);
            reverse(tempo.begin(), tempo.end());
            ans = fn(n - 1) + "1" + tempo;
        }

        return ans;
    }

    char findKthBit(int n, int k)
    {
        string pre_ans = fn(n);
        return pre_ans[k+1];
    }
};

void solve()
{
}

int main()
{
    Solution s;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string nas = s.fn(4);
    cout << nas << "\n";

    char res = s.findKthBit(4,11);

    cout << res << "\n";

    return 0;
}