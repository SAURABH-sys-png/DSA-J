#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int candy(vector<int> &ratings)
	{
		// two int var
		// ptr1 1->0>2
		// 2->1->2
		// 5
		// 1->2->1
		// 4
		// 1,2,3,4,2,2,1
		int n = ratings.size();

		vector<int> pref_rat(n);
		pref_rat[0] = 1;
		for (int i = 1; i < n; i++)
		{
			if (ratings[i] > ratings[i - 1])
			{
				pref_rat[i] = pref_rat[i - 1] + 1;
			}
			else
			{
				pref_rat[i] = 1;
			}
		}

		vector<int> suff_rat(n);

		suff_rat[n - 1] = 1;
		for (int i = n - 2; i >= 0; i--)
		{
			if (ratings[i] > ratings[i + 1])
			{
				suff_rat[i] = suff_rat[i + 1] + 1;
			}
			else
				suff_rat[i] = 1;
		}
		int res = 0;

		for (int i = 0; i < n; i++)
		{
			res += max(pref_rat[i], suff_rat[i]);
		}
		return res;
	}
};
int main()
{
	return 0;
}
