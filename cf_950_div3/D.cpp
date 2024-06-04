#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    auto solve = [&] () -> bool {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        auto check = [&] (int rem) -> bool {
            vector<int> b;
            for (int i = 0; i < n; i++) if (i != rem) b.push_back(a[i]);
            for (int i = 2; i < n - 1; i++) {
                if (gcd(b[i], b[i - 1]) < gcd(b[i - 1] , b[i - 2])) {
                    return false;
                }
            }
            return true;
        };
        for (int i = 2; i < n; i++) {
            int g1 = gcd(a[i], a[i - 1]), g2 = gcd(a[i - 1], a[i - 2]);
            if (g1 < g2) {
                return check(i - 2) || check(i - 1) || check(i);
            }
        }
        return true;
    };
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cout << (solve() ? "YES" : "NO") << '\n';
    }
    return 0;
}