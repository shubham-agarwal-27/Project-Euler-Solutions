/*
    Author : Shubham Agarwal
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a , ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
    return a*b/(gcd(a,b));
}

int main() {
    int t;
    cin>>t;
    while(t--){
    ll n;cin>>n;
    ll ans=1;
        for(ll i=2;i<=n;i++)
        {
            ans=lcm(ans,i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
