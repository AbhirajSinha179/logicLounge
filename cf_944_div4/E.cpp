#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k + 1);
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
    }
    vector<int> b(k + 1);
    for (int i = 1; i <= k; i++) {
        cin >> b[i];
    }
    while (q--) {
        int d;
        cin >> d;
        int j = lower_bound(a.begin(), a.end(), d) - a.begin();
        int ans;
        if (j == 0) {
            ans = 0;
        } else {
            ans = b[j - 1] + 1LL * (b[j] - b[j - 1]) * (d - a[j - 1]) / (a[j] - a[j - 1]);
        }
        cout << ans << " \n"[q == 0];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
