#include <bits/stdc++.h>

using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, k;
    cin >> n >> k;

    // n -> number of students
    // k -> number of classes

    unordered_map<int, int> mp; 

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }

    unordered_map<int, int> freq_of_student;

    for (auto &[key, val] : mp)
    {
        freq_of_student[val]++;
    }

    int ans = 0;
    int num = 0;
    int cnt = 0;

    for (auto &[nstudents, nclasses] : freq_of_student)
    {
        if (nstudents > num)
        {
            num = nstudents;
            cnt = nclasses;
        }
    }

    ans += cnt;

    int nless = num - 1;

    if (freq_of_student.find(nless) != freq_of_student.end())
    {
        ans += freq_of_student[nless];
    }

    cout << ans << '\n';
}

int main()
{
    fastio;
    solve();

    return 0;
}