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
        int n;
        cin >> n;
        int f1 = 1,f2 = 2,f = 0, sum = 0;
        while(f1 < n)
        {
            if(f1 % 2 == 0)
            {
                sum += f1;
            }
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
        cout << sum << endl;
    }   return 0;
}
