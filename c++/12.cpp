/* 
  Author : Shubham Agarwal
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int div(int num)
{
    int n=num;
    int i=2,count=1;
    if(n==1)return 1;
    while(i*i<=n)
    {
        int c=1;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
        i++;
        count*=c;
    }
    if(n==num || n>1)count*=2;
    return count;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=1,d=1;
        while(div(i)<=n)
        {
            d++;
            i+=d;
        }
        cout<<i<<endl;
    }
    return 0;
}
