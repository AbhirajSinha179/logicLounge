#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        map<unsigned, multiset<int>> group;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            group[a[i] >> 2].insert(a[i]);
        }
        int ans[n];
        for (int i = 0; i < n; ++i)
        {
            ans[i] = *group[a[i] >> 2].begin();
            group[a[i] >> 2].erase(group[a[i] >> 2].begin());
        }
        for (int i = 0; i < n; ++i)
            cout << ans[i] << ' ';
        cout << endl;
    }
}   