/*
    Author : Shubham Agarwal
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

vector <int> v;

bool is_prime(int n)
{
    for(int j=2;j*j<=n;j++)
    {
        if(n%j == 0)
            return false;
    }
    return true;
}

void store_prime()
{
    v.push_back(2);
    for(int i=3;v.size()<10001;i+=2)
    {
        if(is_prime(i))
            v.push_back(i);
    }
}

int32_t main() {
    
    int t;
    cin>>t;
    store_prime();
    while(t--)
    {
        int n;
        cin >> n;
        cout << v[n-1] << endl;
    }
    return 0;
}
