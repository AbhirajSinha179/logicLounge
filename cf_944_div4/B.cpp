#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            swap(s[i], s[i + 1]);
            cout << "YES" << endl;
            cout << s << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}