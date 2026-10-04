#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int mini(int prev, int num)
	{
		return min(abs(num - prev), 10 - abs(num - prev));
	}
	int minRotations(int n, string s)
	{
		int prev = 0;
		vector<int> sums(n + 1, 0);
		int sum = 0;

		vector<int> nums(n+1, 0);
		for (int i = 1; i <= n; i++)
		{
			int num = s[i - 1] - '0';
			sum+=mini(prev, num);
			nums[i] = mini(prev, num);
			sums[i] = sums[i - 1] + mini(prev, num);
			prev = num;
		}
		

		int lst = s[n - 1] - '0';
		int res = sums[n];
		for(int i = 1;i <=n-1;i++){
			int prev_sum = sums[i-1];
			prev = s[i-1] - '0';
			int num = s[i] - '0';
			int post_sum = sums[n] - nums[i];
			int tmp = min(mini(prev, lst), mini(prev, num)) + prev_sum + post_sum;
			res = min(res, tmp);
		}

		return res;
	}
};

int main()
{
}
