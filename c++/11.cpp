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
    ll ans[26][26][8]={0};
    ll arr[26][26]={0};
    for(ll i=3;i<23;i++)
    {
        for(ll j=3;j<23;j++)cin>>arr[i][j];
    }
    for(ll i=3;i<23;i++)
    {
        for(ll j=3;j<23;j++)
        {
            ans[i][j][0]=arr[i][j]*arr[i-1][j]*arr[i-2][j]*arr[i-3][j];
            ans[i][j][1]=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
            ans[i][j][2]=arr[i][j+1]*arr[i][j+2]*arr[i][j+3]*arr[i][j];
            ans[i][j][3]=arr[i+1][j+1]*arr[i+2][j+2]*arr[i][j]*arr[i+3][j+3];
            ans[i][j][4]=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            ans[i][j][5]=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
            ans[i][j][6]=arr[i][j-1]*arr[i][j-2]*arr[i][j-3]*arr[i][j];
            ans[i][j][7]=arr[i][j]*arr[i-1][j-1]*arr[i-2][j-2]*arr[i-3][j-3];
        }
    }
    ll maxx=0;
    for(ll i=3;i<23;i++)
    {
        for(ll j=3;j<23;j++)
        {
            for(ll k=0;k<8;k++)
            {
                maxx=max(maxx,ans[i][j][k]);
            }
        }
    }
    cout<<maxx<<endl;
    return 0;
}
