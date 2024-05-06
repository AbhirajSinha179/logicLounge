#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int w;
	cin >> w;
	while (w--) {
		// Brute Force Using For loop & GCD inbuilt function
		/*  int n;
		    cin >> n;
		    int y = 1;
		    for (int i = 1; i < n; ++i)
		    {
		    if (__gcd(n, i) + i > __gcd(n, y) + y)
		    y = i;
		    }
		    cout << y << "\n";  */
		// Optimized Solution
		int x;
		cin >> x;
		cout << x-1 << "\n";
	}
	    return 0;
}
