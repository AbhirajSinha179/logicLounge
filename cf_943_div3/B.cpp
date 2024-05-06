#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		string s1, s2;
		cin >> s1 >> s2;
		int j = 0, k = 0;
		for (int i = 0; i < n; ++i)
		{
			char s = s1[i];
			while (j != s2.size())
			{
				if (s2[j] == s)
				{
					j++;
					k++;
					break;
				}
				j++;
			}
			if (j == s2.size())
			{
				break;
			}
		}
		if (j == s2.size())
		{
			cout << k << endl;
		}
		else
		{
			cout << n << endl;
			    }
		    }
}
