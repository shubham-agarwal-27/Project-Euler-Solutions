/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
set<int>b;
int siz=3000000;
bool composite[3000000];
void sieve()
{
    memset(composite,false,sizeof(composite));
    composite[1]=composite[0]=true;
    for(int i=2;i<siz;i++)
    {
        if(!composite[i])
        {
            if(i<2001)b.insert(i);
            for(int j=i*i;j<siz;j+=i)
            {
                composite[j]=true;  
            }
        }
    }
}

int32_t main() {
    sieve();
    int n;
    cin>>n;
    int l=n,h=n;
    l*=(-1);
    int maxx=0;
    pair<int,int>ans;
    for(auto itb:b)
    {
        if(itb>n)break;
        if(itb!=2)
        {
            int a;
            if(h%2==0)a=l+1;
            else a=l;
            int count=0;
            for(;a<=h;a+=2)
            {
                count=0;
                for(int i=0;i<=h;i++)
                {
                    int req=i*i + a*i + itb;
                    if(req>0 && !composite[req])
                    {
                        count++;
                    }
                    else break;
                }
                if(count>maxx)
                {
                    ans=make_pair(a,itb);
                    maxx=count;
                }
            }
        }
        else
        {
            int a;
            if(h%2==0)a=l+1;
            else a=l;
            int count=0;
            for(;a<=h;a++)
            {
                count=0;
                for(int i=0;i<=h;i++)
                {
                    int req=i*i + a*i + itb;
                    if(req>0 && !composite[req])
                    {
                        count++;
                    }
                    else break;
                }
                if(count>maxx)
                {
                    ans=make_pair(a,itb);
                    maxx=count;
                }
            }
        }
    }
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}
