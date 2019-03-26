#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
    int a[5000];        /* Stores the Fn-2 array */
    int b[5000];        /* Stores the Fn-1 array */
    int n = 5000;
    
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    
    a[4999] = b[4999] = 1;
    
    int ans[n+1];
    int count = 2;      /* count stores the index of the first Fibonacci number having n digits */ 
    
    memset(ans,0,sizeof(ans));
    ans[1] = 1;
    
    /* b[0] == 0 checks whether the 5000th digit has been reached */
    while(b[0] == 0)
    {
        int carry = 0;
        int temp[5000];
        for(int i=0;i<n;i++)
            temp[i] = b[i];
        count ++;
        for(int i=n-1 ; i>=0 ; i--)
        {
            /* addition of two arrays */
            b[i] = a[i] + b[i] +carry;
            carry = b[i]/10;
            b[i] %= 10;
        }
        for(int i=0;i<n;i++)
        {
            if(b[i] > 0)
            {
                if(ans[n-i] == 0)
                    ans[n-i] = count;
            }
        }
        /* storing the original array b in array a */
        for(int i=0;i<n;i++)
            a[i] = temp[i];      
    }
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        cout << ans[x] << endl;
    }
    return 0;
}
