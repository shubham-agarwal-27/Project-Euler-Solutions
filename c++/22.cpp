/*
    Author : Shubham Agarwal
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    set<string>arr;
    for(int i=0;i<n;i++){
        string st;
        cin >> st;
        arr.insert(st);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin >> s;
        auto p = arr.find(s);
        int pos = distance(arr.begin(), p);
        pos++;
        int sum = 0;
        for(int i=0;i<s.length();i++)
        {
           sum +=s [i]-64;
        }
        cout << pos*sum << endl;
    }
    return 0;
}
