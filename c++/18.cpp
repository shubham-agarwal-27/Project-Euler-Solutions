/*
    Author : Shubham Agarwal
*/

#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> p(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                int x;
                cin>>x;
                p[i].push_back(x);
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                p[i][j]+=max(p[i+1][j],p[i+1][j+1]);
            }
        }
        cout<<p[0][0]<<endl;
    }
    return 0;
}
