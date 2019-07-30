#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {unordered_map<int , int> m;
     int n;cin >> n;int k;cin >> k;   
    int h = 0;int x;int c =0;
    while(h<n)
        {cin >> x;m[x]++;h++;}
    for(auto i : m)    
        {if(m.find(k-i.first)!=m.end())
        if((k-i.first)==i.first){c += (((m[i.first]-1)*m[k - i.first])/2);
            m.erase(i.first);//m.erase(k-i.first);
            }else {c += m[i.first]*m[k-i.first];m.erase(i.first);m.erase(k-i.first);}}
    cout << c << endl;}

    return 0;
}