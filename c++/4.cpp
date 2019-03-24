/*
    Author : Shubham Agarwal
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int>v;

bool is_palindrome(int n)
{
    string x = to_string(n);
    for(int i=0;i<x.length();i++)
    {
        if(x[i] != x[x.length()-1-i])
            return false;
    }
    return true;
}

void palindrome()
{
    int maxx = 100000;
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {
            if(is_palindrome( i*j ))
            {
                v.push_back(i*j);
            }
        }
    }
}

int32_t main() {
    
    int t;
    cin >> t;
    palindrome();
    sort(v.begin(),v.end());
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>::iterator it = lower_bound(v.begin(),v.end(),n) - 1;
        cout << *it <<endl;
    }
    
    return 0;
}
