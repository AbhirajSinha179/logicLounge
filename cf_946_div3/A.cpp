#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Calculate screens needed using the provided formula
        int screens_for_combined = ceil((x + 4 * y) / 15.0);
        int screens_for_2x2 = ceil(y / 2.0);

        // The result is the maximum of the two values
        int result = max(screens_for_combined, screens_for_2x2);

        // Output the result
        cout << result << endl;
    }

    return 0;
}


// Time Complexity : O(n)