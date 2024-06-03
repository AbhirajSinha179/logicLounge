#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n >= m && n % 2 == m % 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}