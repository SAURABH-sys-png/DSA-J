#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		// take input from user for r,g,b make a string out of it where s ith is not equal to si+1 and si != si +3 string has R,G,B as things in ti
		int r, g, b;
		cin >> r >> g >> b;
		string s = "";
		while (r > 0 || g > 0 || b > 0)
		{
			int maxnum = max({r, g, b});
			if (maxnum == r)
			{
				if (s.size() == 0)
				{
					s += 'R';
					r--;
				}
				else if (s.size() >= 3)
				{
					if (((s[s.length() - 3] != 'G' && s.back() != 'G')&& g > 0)&& g>=b)
					{
						s += 'G';
						g--;
					}
					else if (((s[s.length() - 3] != 'B' && s.back() != 'B') && b > 0)&& b>=g)
					{
						s += 'B';
						b--;
					}
					else if (s[s.length() - 3] != 'R' && s.back() != 'R')
					{
						s += 'R';
						r--;
					}
					else{
						break;
					}
				}

				else if (s.size() < 3)
				{
					if (s.back() != 'R')
					{
						s += 'R';
						r--;
					}
					else
					{
						if (g > 0 && g >= b)
						{
							s += 'G';
							g--;
						}
						else if (b > 0 && b >= g)
						{
							s += 'B';
							b--;
						}
						else{
							break;
						}
					}
				}
			}
			else if (maxnum == g)
			{
				if (s.size() == 0)
				{
					s += 'G';
					g--;
				}
				else if (s.size() >= 3)
				{
					if (((s[s.length() - 3] != 'R' && s.back() != 'R')&& r > 0)&& r>=b)
					{
						s += 'R';
						r--;
					}
					else if (((s[s.length() - 3] != 'B' && s.back() != 'B') && b > 0)&& b>=r)
					{
						s += 'B';
						b--;
					}
					else if (s[s.length() - 3] != 'G' && s.back() != 'G')
					{
						s += 'G';
						g--;
					}
					else{
						break;
					}
				}

				else if (s.size() < 3)
				{
					if (s.back() != 'G')
					{
						s += 'G';
						g--;
					}
					else
					{
						if (r > 0 && r >= b)
						{
							s += 'R';
							r--;
						}
						else if (b > 0 && b>= r)
						{
							s += 'B';
							b--;
						}
						else{
							break;
						}
					}
				}
			}
			else if (maxnum == b)
			{
				if (s.size() == 0)
				{
					s += 'B';
					b--;
				}
				else if (s.size() >= 3)
				{
					if (((s[s.length() - 3] != 'R' && s.back() != 'R')&& r > 0)&& r>=g)
					{
						s += 'R';
						r--;
					}
					else if (((s[s.length() - 3] != 'G' && s.back() != 'G') && g > 0)&& g>=r)
					{
						s += 'G';
						g--;
					}
					else if (s[s.length() - 3] != 'B' && s.back() != 'B')
					{
						s += 'B';
						b--;
					}
					else{
						break;
					}
				}

				else if (s.size() < 3)
				{
					if (s.back() != 'B')
					{
						s += 'B';
						b--;
					}
					else
					{
						if (g > 0 && g >= r)
						{
							s += 'G';
							g--;
						}
						else if (r > 0 && r >= g)
						{
							s += 'R';
							r--;
						}
						else{
							break;
						}
					}
				}
			}
		}
		cout << s << endl;
	}


	return 0;
}
