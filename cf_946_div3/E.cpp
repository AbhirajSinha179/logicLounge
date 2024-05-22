#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int m, x;
        cin >> m >> x;
        int c[m], h[m];
        int sh = 0;
        for (int i = 0; i < m; ++i)
        {
            cin >> c[i] >> h[i];
            sh += h[i];
        }
        
        long long dp[m][sh + 1];
        for (int p = 1; p <= sh; ++p)
            dp[0][p] = LLONG_MIN;
        dp[0][0] = x;
        if (c[0] == 0)
            dp[0][h[0]] = x;
            
        for (int i = 1; i < m; ++i)
        {
            for (int p = 0; p <= sh; ++p)
            {
                dp[i][p] = dp[i - 1][p] + x;
                if (p - h[i] >= 0 && dp[i - 1][p - h[i]] >= c[i])
                    dp[i][p] = max(dp[i][p], dp[i - 1][p - h[i]] - c[i] + x);
            }
        }

        int ans = 0;
        for (int p = 0; p <= sh; ++p)
            if (dp[m - 1][p] >= 0)
                ans = p;
        cout << ans << endl;
    }
}