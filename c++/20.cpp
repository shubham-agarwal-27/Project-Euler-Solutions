/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> p;
vector<int>sum;

void solve()
{
    int temp=1;
    p.push_back(1);
    for(int i=1;i<=1000;i++)
    {
        int carry=0;
        for(int j=p.size()-1;j>=0;j--)
        {
            p[j]*=i;
            p[j]+=carry;
            carry=p[j]/10;
            p[j]%=10;
        }
        while(carry>0)
        {
            p.insert(p.begin(),carry%10);
            carry/=10;
        }
        int ans=0;
        for(int j=0;j<p.size();j++)
        {
            ans+=p[j];
        }
        sum.push_back(ans);
    }
}

int32_t main() {
    int t;
    cin>>t;
    solve();
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)cout<<1<<endl;
        else
        cout<<sum[n-1]<<endl;
    }
    return 0;
}
