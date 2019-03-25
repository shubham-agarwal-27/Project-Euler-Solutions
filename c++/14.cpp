/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans[5000003];
int ind[5000003];
/*
    ans stores the chain length for every number till 5000003
    ind stores the number <= i that has the longest chain length
*/
void fill_ans()
{
    ans[1] = 1;
    ind[1] = 1;
    int maxx = 1;

    for(int i=2;i<5000001;i++)
    {
        int j = i,k = 0;
    
        while(j != 1 && j>=i)
        {
            k++;
            if(j%2 == 0)
                j /= 2;
            else
                j = j*3 + 1;
        }
        if(maxx <= k+ans[j])
        {
            maxx = k + ans[j];
            ind[i] = i;
            ans[i] = k + ans[j];
        }
        else{
            ind[i] = ind[i-1];
            ans[i] = k + ans[j];
        }        
    }
}

int32_t main() {
    int t;
    cin>>t;
    fill_ans();
    
    while(t--)
    {
        int n;
        cin>>n;
        cout << ind[n] << endl;
    }
    
    return 0;
}
