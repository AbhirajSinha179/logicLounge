#include <bits/stdc++.h>
using namespace std;
//  C beautiful triplet pairs

// should differ in only one element - beautiful
// adjascent triplets
// triplets are different

// make a frequency count, of all adjascent vectors
// and of placeholder triplets

// for every triplet pair, check if it is beautiful (first-second, second-third, first-third same)
// if it is, then add the frequency of the triplet to the answer
// and subtract the frequency of the triplet from the answer where first-second-third are same

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &e : a)
    cin >> e;
  map<vector<int>, int> frq;

  int ans = 0;

  for (int i = 2; i < n; i++)
  {
    ans += frq[{0, a[i - 1], a[i]}] - frq[{a[i - 2], a[i - 1], a[i]}];
    ans += frq[{a[i - 2], 0, a[i]}] - frq[{a[i - 2], a[i - 1], a[i]}];
    ans += frq[{a[i - 2], a[i - 1], 0}] - frq[{a[i - 2], a[i - 1], a[i]}];

    frq[{0, a[i - 1], a[i]}]++;
    frq[{a[i - 2], 0, a[i]}]++;
    frq[{a[i - 2], a[i - 1], 0}]++;
    frq[{a[i - 2], a[i - 1], a[i]}]++;
  }
  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
}

