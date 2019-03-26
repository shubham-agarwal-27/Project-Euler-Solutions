/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int day(int y, int m, int d)
{
  if (m <= 2)
  {
    m += 12;
    y--;
  }
  return (d + 13 * (m + 1) / 5 + y + y/4 - y/100 + y/400) % 7;
}

int solve(int y1,int m1, int d1, int y2, int m2,int d2)
{
    int cy = y1;
    int cm = m1;
    if(d1> 1)
    {
        cm  ++;
        if(cm > 12)
        {
            cy ++;
            cm -= 12;
        }
    }
    int count = 0;
    while(cm < m2 || cy < y2)
    {
        if(day(cy, cm, 1) == 1)
            count ++;
        cm ++;
        if(cm > 12)
        {
            cy ++;
            cm-=12;
        }
    }
    if(day(cy,cm,1) == 1)
    {
        count ++;
    }
    return count;
}


int32_t main() {
    int t;
    cin >> t;
    while(t--)
    {
        int y1,m1,d1,y2,m2,d2;
        cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2; 
        cout << solve(y1,m1,d1 ,y2,m2,d2) << endl;
    }
    return 0;
}
