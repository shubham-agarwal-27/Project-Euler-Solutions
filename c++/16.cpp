/*
    Author : Shubham Agarwal
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
       
    vector<int>v;
    v.push_back(1);
    int sum[10003];
    sum[0] = 1;
    for(int i=1;i<10001;i++)
    {
        int carry = 0;
        for(int j=v.size()-1;j>=0;j--)
        {
            int temp = (v[j]*2 + carry)/10;
            v[j] = (v[j]*2 + carry) % 10;
            carry = temp;
        }
        if(carry > 0)
        {
            v.insert(v.begin(),carry);
        }
        int a = 0;
         for(int j=0;j<v.size();j++)
         {
             a += v[j];
         }
        sum[i] = a;
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << sum[n] << endl;
    }
    return 0;
}
