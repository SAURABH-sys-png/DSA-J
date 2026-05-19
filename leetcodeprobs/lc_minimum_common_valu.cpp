#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int res = -1;
        int ptr1 = 0;
        int ptr2 = 0;
        while (ptr1 < nums1.size() && ptr2 < nums2.size())
        {
            if (nums1[ptr1] == nums2[ptr2])
            {
                res = nums1[ptr1];
                break;
            }
            else if (nums1[ptr1] < nums2[ptr2])
            {
                ptr1++;
            }
            else
            {
                ptr2++;
            }
        }
        return res;
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