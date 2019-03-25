/*
    Author : Shubham Agarwal
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int t;
    cin >> t; 
    while(t--){
        
        int n,sum=0;
        
        cin >> n;
        
        int x= (n-1)/3;
        sum += ((2*3 + (x-1)*3 )*x) / 2;
        x = (n-1)/5;
        sum += (( 2*5 + (x-1)*5)*x)/2;
        x=(n-1)/15;
        sum-=((2*15+(x-1)*15)*x)/2;
        cout<<sum<<endl;
    }
    return 0;
}
