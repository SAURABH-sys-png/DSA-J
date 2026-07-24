#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n, a, b;
	cin >> n >> a >> b;
	int no_a = n;
	int no_b = n;
	if (a+b == 1)
	{
		cout << "NO" << '\n';
		return;
	}
	
	if ((a + b > n) || a == n || b == n)
	{
		cout << "NO" << '\n';
		return;
	}
	else
	{
		cout << "YES" << '\n';
		while (no_a>0)
		{
			cout << no_a << " ";
			no_a--;
		}
		cout << '\n';
		int cnt = n - (a + b);
		while (cnt > 0)
		{
			cout << no_b << " ";
			no_b--;
			cnt--;
		}
		while (a>0)
		{
			cout << a << " ";
			a--;
		}
		while (b>0)
		{
			cout << no_b << " ";
			no_b--;
			b--;
		}
		cout << "\n";
	}
	return;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}