/*
    Author : Shubham Agarwal
*/

#include<bits/stdc++.h>
#define int long long

using namespace std;

int modulo=1000000007;

int mod(int n)
{
    return n%modulo;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int p[n+2][m+2];
        memset(p,0,sizeof(p));
        p[1][1]=1;
        for(int i=1;i<=n+1;i++)
        {
            for(int j=1;j<=m+1;j++)
            {
                
                p[i][j]=mod(p[i][j]+mod(p[i][j-1]+p[i-1][j]));
                
            }
            
        }
        cout<<mod(p[n+1][m+1])<<endl;
    }
    return 0;
}
