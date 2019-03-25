/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        string s;
        cin >> s;
        /* Create an integer array by using the ascii values */
        for(int i=0;i<n;i++)
        {
            arr[i] = s[i] - 48;
        }
        int maxx = 0;
        for(int i=k;i<=n;i++)
        {
            int prod = 1;
            for(int j=i-k;j<i;j++)
            {
                prod *= arr[j];
            }
            maxx = max(maxx, prod);
        }
        cout << maxx << endl;
    }
  return 0;
}
