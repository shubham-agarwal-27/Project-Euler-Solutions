/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
int maxx = 10002;
int len[10002];
int ans[10002];

void fill_ans()
{
    ans[1] = 0;
    len[1] = 0;
    ans[2] = 0;
    len[2] = 0;
    memset(len,0,sizeof(len));
    memset(ans,0,sizeof(ans));
    for(int i=2;i<maxx;i++)
    {
        int prev[i] = {0};
        int j = 1;
        int curr_num = 1;
        int rem = 1 % i;
        int flag = 1;
        while(1)
        {
            rem = curr_num % i;
            if(rem == 0)
            {
                flag = 0;
                break;
            }
            if(prev[rem] > 0)
            {
                flag = 1;
                break;
            }
            prev[rem] = j;
            curr_num = rem * 10;
            j++;
        }
        if(flag == 0)
        {
            ans[i+1] = ans[i];
            len[i] = 0;
            continue;
        }
        else
        {
            len[i] = j - prev[rem];
            ans[i+1] = (len[ans[i]] >= len[i] ? ans[i] : i);
        }
    }
}

int32_t main() {
       
    fill_ans();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}
