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

int main() {
    int n;
    cin>>n;
    int arr[n][50];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<50;j++)
        {
            arr[i][j]=s[j]-48;
        }
    }
    int ans[51]={0};

    int x=0;
    for(int j=49;j>=0;j--)
    {
        int sum=x;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        ans[j+1]=sum%10;
        x=sum/10;    
    }
    ans[0]=x;

    ll req=0;
    ll p=1e9;
    int k=0;

    while(req/p<=0)
    {

        req*=10;
        req+=(ll)ans[k++];

    }
    cout<<req<<endl;

    return 0;
}
