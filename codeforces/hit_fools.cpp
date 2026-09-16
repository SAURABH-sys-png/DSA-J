#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int bea, ver;
	cin >> bea >> ver;

	long long ph1 = 0;
	long long ph2 = 0;

	std::vector<int> v1(bea);
	std::vector<int> v2(ver);
	for (int i = 0; i < bea; i++)
	{
		cin >> v1[i];
	}
	for (int i = 0; i < ver; i++)
	{
		cin >> v2[i];
	}

	for (int i = 0; i < bea-1; i++)
	{
		ph1 += v1[i] - v1[i + 1] + 1;
	}

	// last case
	ph1 += v1.back();
	for (int i = 0; i < ver-1; i++)
	{
		ph2 += v2[i] - v2[i + 1] + 1;
	}
	ph2 += v2.back();

	// so we have the count of total boulders being thrown

	if (ph1 > ph2)
	{
		cout << 1 << '\n';
	}
	else if (ph1 < ph2)
	{
		cout << 2 << '\n';
	}
	else
	{
		cout << 1 << '\n';
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
	return 0;
}