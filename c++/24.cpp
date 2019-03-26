/*
    Author : Shubham Agarwal
    Use this link : https://www.wikiwand.com/en/Factorial_number_system
    to understand the logic behind the code 
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
string s = "abcdefghijklm";

vector<int> fact(int n)
{
    vector<int> ans(s.size() , 0);
    int temp = n - 1;
    int k = 1;
    int i = s.size() - 1;
    for(; i>=0 ; i--)
    {
        ans[i] = temp % k;
        temp /= k;
        k ++;
    }
    return ans;
}

string go(int n)
{
    vector<char> temp;
    for(int i=0 ; i<s.length() ; i++)
        temp.push_back(s[i]);
    vector<int> f = fact(n);
    string ans = "";
    for(int i=0 ; i<f.size() ; i++)
    {
        ans += temp[f[i]];
        temp.erase(temp.begin() + f[i]);
    }
    return ans;
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << go(n) << endl;
    }
    return 0;
}
