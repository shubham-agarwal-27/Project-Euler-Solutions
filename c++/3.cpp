#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    for (int i = 2; i*i <= n; i++)
      while (n%i == 0 && n != i)
      {
          n /= i;
      }
    cout << n << endl;
  }
  return 0;
}

