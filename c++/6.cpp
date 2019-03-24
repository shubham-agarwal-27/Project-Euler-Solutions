/*
    Author : Shubham Agarwal
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    long long a,b,n;
    while(t--){
        cin>>n;
        a=pow(n*(n+1),2)/4;
        b=0;
        while(n!=0){
            b+=pow(n,2);
            n--;
        }
        cout<<a-b<<endl;
    }
    return 0;
}
