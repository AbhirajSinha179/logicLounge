#include<bits/stdc++.h>
using namespace std;

void solve(){
 
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &ele : v) {
        cin >> ele;
    }
 
    vector<int> bits(20, 0);
    int low = 1;
    int high = n;
    int ans = n;
 
    while (low <= high) {
        set<vector<int>> checkbits;
        int mid = (low + high) / 2;
        fill(bits.begin(), bits.end(), 0);
        for (int i = 0; i < mid; i++) {
            for (int j = 0; j < 20; j++) {
                if ((v[i] & (1 << j)) != 0) {
                    bits[j]++;
                }
            }
        }
        vector<int> temp = bits;
        for (int i = 0; i < 20; i++) {
            if (temp[i] >= 1) temp[i] = 1;
        }
        checkbits.insert(temp);
 
        int l = 0;
        int r = mid;
        while (r < n) {
 
            for (int j = 0; j < 20; j++) {
                if ((v[l] & (1 << j)) != 0) bits[j]--;
                if ((v[r] & (1 << j)) != 0) bits[j]++;
            }
            temp = bits;
            for (int i = 0; i < 20; i++) {
                if (temp[i] >= 1) temp[i] = 1;
            }
            checkbits.insert(temp);
            l++;
            r++;
        }
 
        if (checkbits.size() == 1) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
 
        checkbits.clear();
    }
 
    cout << ans << endl;}
int32_t main(){
    solve();
    return 0;
}