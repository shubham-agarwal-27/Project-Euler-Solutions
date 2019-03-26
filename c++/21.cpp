/*
    Author : Shubham Agarwal
*/

#include <bits/stdc++.h>
#define int long long

using namespace std;

set<int>s;          /* Stores all amicable numbers less than or equal to 10e5 */
int arr[100003];    /*Stores the sum of PROPER divisors of all numbers less than or equal to 10e5 */

void fill_s()
{
    arr[1] = 1;
    for(int i=2;i<100001;i++)
    {
        arr[i] = 1;
        for(int j=2 ; j*j<=i ; j++)
        {
            if(i%j == 0)
            {
                arr[i] += j;
                if(j*j != i)
                    arr[i] += i/j;
            
            }
            
        }
    }
    for(int i=1;i<100001;i++)
    {
        if(arr[i] < 100001 && i == arr[arr[i]])
        {
            if(i != arr[i])
            {
                /* Check if the number already exists in the set or not */
                if(s.find(i) == s.end())s.insert(i);
                if(s.find(arr[i])==s.end())s.insert(arr[i]);
            }
        }
    }
}

int32_t main() {
    fill_s();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for(auto it:s)
        {
            if(it > n) break;
            sum += it;
        }
        cout << sum <<endl;
    }
    return 0;
}
