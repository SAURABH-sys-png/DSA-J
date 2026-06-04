#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;

    queue<int> q;

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (q.size() > 1)
    {
        q.push(q.front());
        q.pop();

        cout << q.front() << " ";
        q.pop();
    }

    cout << q.front() << '\n';

    return 0;
}