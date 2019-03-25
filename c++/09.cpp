/*
    Author : Shubham Agarwal
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll ans(ll n)
{
    ll prod=-1;
    ll a,b,c;
    
    for(ll i=1;i<n;i++)
    {
        a=i;
        b = (n*n - 2*n*a)/(2*n - 2*a);
        c = n - a - b;
        if(b<=0 || c<=0)continue;
        if(c*c==b*b+a*a)
        {
            prod=max(prod,a*b*c);
        }
    }
    return prod;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<ans(n)<<endl;
    }
    return 0;
}
