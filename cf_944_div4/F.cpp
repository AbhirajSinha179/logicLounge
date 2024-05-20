#include <bits/stdc++.h>
using namespace std;

// brute force approach
void solve()
{
  long long r;
  cin >> r;
  long long ans = 0;
  long long x = r;
  for (long long i = 0; i <= r; i++)
  {

    long long dist = (i * i + x * x);
    while (dist >= (r + 1) * (r + 1))
    {
      x--;
      dist = i * i + x * x;
    }
    long long height = x;
    while (i * i + height * height >= r * r && height >= 0)
    {
      height--;
      ans++;
    }
  }
  cout << ans * 4 - 4 << endl;
}

// binary search approach
void solve1()
{
  long long r;
  cin >> r;
  int y = 0;
  long long ans = 0;
  for (long long i = 0; i <= r; i++)
  {
    long long d = (r + 1) * (r + 1) - i * i;
    long long l = 0, h = r;
    while (l <= h)
    {
      long long mid = l + (h - l) / 2;
      if (mid * mid < d)
      {
        y = mid;
        l = mid + 1;
      }
      else
      {
        h = mid - 1;
      }
    }
    if (i)
      ans += (2 * y + 1) * 2;
    else
      ans += (2 * y + 1);
  }

  for (long long i = 0; i < r; i++)
  {
    long long int d = (r) * (r)-i * i;
    int l = 0, h = r - 1;

    while (l <= h)
    {
      long long mid = l + (h - l) / 2;
      if (mid * mid < d)
      {
        y = mid;
        l = mid + 1;
      }
      else
      {
        h = mid - 1;
      }
    }
    if (i)
      ans -= (2 * y + 1) * 2;
    else
      ans -= (2 * y + 1);
  }
  cout << ans << endl;
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