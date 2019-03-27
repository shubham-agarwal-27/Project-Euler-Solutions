/*
    Author : Shubham Agarwal
*/
#include<bits/stdc++.h>
#define int long long
#define MOD 1000000007

using namespace std;

int mod(int n)
{
    return n % MOD;
}

int solve(int n)
{
    n /= 2;
    n = mod(n);
    int x = mod(2 * mod( n * (n + 1)));
    /* inverse modulo (3,MOD) = 333333336 */
    int y = mod(mod(4 * mod(x * mod(2*n + 1))) * 333333336);
    int z = mod(x + mod(4*n) + 1);
    return mod(y + z);
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}

