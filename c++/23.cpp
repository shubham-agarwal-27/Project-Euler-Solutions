/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
int maxx = 100003;
int req = 28123;
set<int>s;

void fill_abun()
{
    for(int i=2;i<=req;i++)
    {
        int sum = 1;
        for(int j=2 ; j*j<=i ; j++)
        {
            if(i%j == 0)
            {
                sum += j;
                if(j*j != i)
                {
                    sum += i/j;
                }
            }
            if(sum > i)
                s.insert(i);
        }
    }
}

int32_t main() {
    
    fill_abun();
    int t;
    cin >> t;
    int count = 0;
    int siz = req+1;
    bool ans[siz];
    
    memset(ans,false,sizeof(ans));
    
    for(auto it : s)
    {
        for(auto j : s)
        {
            count ++;
            if(it + j > req)break;
                ans[it+j] = true;
        }
    }
    
    while(t--)
    {
        int n;
        cin >> n;
        
        if(n > req)
        {
            cout << "YES" << endl;
            continue;
        }
        
        if(ans[n])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" <<endl;
    }
    return 0;
}
