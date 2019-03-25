/*
    Author : Shubham Agarwal
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n=1e6;
bool prime[1000005];
ll sum[1000005];
void sieve()
{
    for(ll i=2;i<=n;i++)
    {
        if(prime[i])
        {
            sum[i]=sum[i-1]+i;
            for(ll j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
        else
         sum[i]=sum[i-1];
    }
}

int main() {
    memset(prime,true,sizeof(prime));
    memset(sum,0,sizeof(sum));
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        cout<<sum[k]<<endl;
    }
    return 0;
}
